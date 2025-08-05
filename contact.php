<!-- Form Submission -->
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name    = htmlspecialchars(trim($_POST["name"]));
    $email   = filter_var($_POST["email"], FILTER_VALIDATE_EMAIL);
    $subject = htmlspecialchars(trim($_POST["subject"]));
    $message = htmlspecialchars(trim($_POST["message"]));

    if ($name && $email && $subject && $message) {
        $to = "emekaolisa232@gmail.com";  // Change this to your email
        $body = "Name: $name\nEmail: $email\nSubject: $subject\n\nMessage:\n$message";

        $headers = "From: $email\r\n" .
                   "Reply-To: $email\r\n" .
                   "Content-type: text/plain; charset=UTF-8\r\n";

        if (mail($to, $subject, $body, $headers)) {
            $success = "Your message was sent successfully!";
        } else {
            $error = "Message failed to send. Please try again.";
        }
    } else {
        $error = "Please fill in all fields correctly.";
    }
}
?>
