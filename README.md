# How to Submit an Assignment on PTIT Code (DLab)

This guide walks you through logging in, finding your course, locating the correct problem code, and submitting your solution on **code.ptit.edu.vn** (DLab).

## 1. Log In

1. Go to **https://code.ptit.edu.vn/login**
2. Enter your **student ID** (e.g., `B23DCCN644`) and your **password**.
3. Click **Đăng nhập** (Log in).
   - Alternatively, you can log in with **Office 365** using the button below the login form.

## 2. Go to Courses (Lớp học)

1. After logging in, you'll land on the **Lớp học** (Courses) page — `code.ptit.edu.vn/courses`.
2. At the top, you may see a **"Bài nên làm tiếp"** (Suggested next exercises) section — shortcuts to recently assigned problems.
3. Below that is **"Lớp học của tôi"** (My Classes). Use the dropdown on the right (e.g., `13 · INT1332 — Lập trình hướng đối tượng · Học kỳ 1 năm học 2026 - 2027`) to select the correct class/course if you're enrolled in more than one.

## 3. Find the Correct Problem Code

1. In the class's problem table, columns are: **Mã** (Problem Code), **Tên đề** (Problem Name), **Chủ đề** (Topic), **Chủ đề con** (Subtopic).
2. Use the **"Tìm mã / tên bài"** (Search by code / name) search box to quickly locate your assignment.
3. **Match the problem code exactly** with what your lecturer assigned (e.g., `J01008`, `CHELLO`, `HELLOFILE`). Submitting to the wrong code means it won't count toward the intended exercise.
4. Click the problem's code or name to open its detail/submission page.

## 4. Submit Your Solution

On the problem page (`code.ptit.edu.vn/submit/<CODE>`, e.g. `/submit/J01008`):

1. Scroll down to the submission box: **"Tải lên file mã nguồn hoặc .zip (project nhiều file) để nộp"** (Upload your source file or a .zip for multi-file projects).
   - Supported: `.cpp`, `.py`, `.java`, ... or `.zip`.
2. Select the correct **language** from the dropdown (e.g., Java, C++, Python) — make sure it matches your source file.
3. Click **"Nộp bài"** (Submit).
4. Wait for the judge to compile and run your code against the test cases.

## 5. Check the Verdict (Kết quả)

Your submission appears in **"Lịch sử nộp của tôi"** (My Submission History) for that problem, showing: ID, Thời gian (Time), Ngôn ngữ (Language), Kết quả (Result), Thời gian chạy (Runtime), Bộ nhớ (Memory).

Possible verdicts:

| Code | Meaning |
|------|---------|
| **AC** | Accepted — your solution passed all test cases |
| **WA** | Wrong Answer — output doesn't match the expected result |
| **TLE** | Time Limit Exceeded — your solution is too slow |
| **MLE** | Memory Limit Exceeded — your solution uses too much memory |
| **CE** | Compile Error — your code failed to compile |
| **RTE** | Runtime Error — your program crashed while running (e.g., division by zero, array out of bounds, null pointer) |

If your submission fails, review your code, fix the issue, and resubmit — most problems allow multiple attempts.

## 6. Other Useful Tabs

From the top navigation bar you can also check:
- **Trạng thái** — overall status/progress across problems.
- **Bài nộp** — all your submissions.
- **Xếp hạng** — leaderboard/ranking.
- **Bài giảng** — lecture materials.
- **Hỗ trợ** — help/support.
