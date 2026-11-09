#include <stdio.h>
#include <string.h>

int main() {
    char customer_feedback[300];

    // get the feedback written by the customer
    printf("Enter customer feedback: ");
    fgets(customer_feedback, sizeof(customer_feedback), stdin);

    size_t feedback_length = strlen(customer_feedback);
    if (feedback_length > 0 && customer_feedback[feedback_length - 1] == '\n') {
        customer_feedback[feedback_length - 1] = '\0';
        feedback_length--;
    }

    printf("Total characters: %zu\n", feedback_length);

    // check the feedback and show its sentiment
    if (strstr(customer_feedback, "good") != NULL) {
        printf("Sentiment Report: Positive (contains 'good')\n");
    } else if (strstr(customer_feedback, "bad") != NULL) {
        printf("Sentiment Report: Negative (contains 'bad')\n");
    } else {
        printf("Sentiment Report: Neutral\n");
    }

    // replace the word bad with not good when it is found
    char *bad_word_position = strstr(customer_feedback, "bad");
    if (bad_word_position != NULL) {
        char remaining_text[300];
        strcpy(remaining_text, bad_word_position + 3);
        strcpy(bad_word_position, "not good");
        strcat(customer_feedback, remaining_text);
    }

    printf("Sanitized feedback: %s\n", customer_feedback);

    return 0;
}
