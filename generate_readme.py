from pathlib import Path
import re
from urllib.parse import quote

ROOT = Path(__file__).resolve().parent
SOURCE_DIR = ROOT / "src"
README_FILE = ROOT / "README.md"


def parse_solution(file_path):
    match = re.match(r"^(\d+)\.(.+)$", file_path.stem)

    if not match:
        return None

    number = int(match.group(1))
    title = match.group(2).replace("-", " ").replace("_", " ")

    return number, title, file_path.name


def main():
    solutions = []

    if SOURCE_DIR.exists():
        for file_path in SOURCE_DIR.iterdir():
            if file_path.is_file():
                solution = parse_solution(file_path)

                if solution:
                    solutions.append(solution)

    solutions.sort(key=lambda item: item[0])

    lines = [
        "# LeetCode Solutions",
        "",
        "My LeetCode solutions.",
        "",
        "## Solutions",
        "",
    ]

    for number, title, filename in solutions:
        encoded_filename = quote(filename)
        lines.append(
            f"- [{number}. {title}](src/{encoded_filename})"
        )

    README_FILE.write_text(
        "\n".join(lines) + "\n",
        encoding="utf-8"
    )

    print(f"Generated {len(solutions)} solutions.")


if __name__ == "__main__":
    main()