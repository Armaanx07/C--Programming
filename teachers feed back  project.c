#include <stdio.h>
#include <string.h>

// Structure to store feedback
struct Feedback {
    char teacherName[50];
    int subjectKnowledge;
    int teachingMethodology;
    int communicationSkills;
    char comments[200];
};

// Function to collect feedback
void collectFeedback(struct Feedback *feedback) {
    printf("Enter Teacher's Name: ");
    scanf(" %[^\n]", feedback->teacherName);

    printf("Rate Subject Knowledge (1-5): ");
    scanf("%d", &feedback->subjectKnowledge);

    printf("Rate Teaching Methodology (1-5): ");
    scanf("%d", &feedback->teachingMethodology);

    printf("Rate Communication Skills (1-5): ");
    scanf("%d", &feedback->communicationSkills);

    printf("Additional Comments: ");
    scanf(" %[^\n]", feedback->comments);
}

// Function to display feedback
void displayFeedback(struct Feedback feedback) {
    printf("\n--- Feedback Summary ---\n");
    printf("Teacher's Name: %s\n", feedback.teacherName);
    printf("Subject Knowledge: %d/5\n", feedback.subjectKnowledge);
    printf("Teaching Methodology: %d/5\n", feedback.teachingMethodology);
    printf("Communication Skills: %d/5\n", feedback.communicationSkills);
    printf("Comments: %s\n", feedback.comments);
    printf("------------------------\n");
}

int main() {
    int choice, count = 0;
    struct Feedback feedbacks[100];

    while (1) {
        printf("\nTeacher Feedback System\n");
        printf("1. Submit Feedback\n");
        printf("2. View Feedback\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    collectFeedback(&feedbacks[count]);
                    count++;
                    printf("Feedback submitted successfully!\n");
                } else {
                    printf("Feedback storage full!\n");
                }
                break;

            case 2:
                for (int i = 0; i < count; i++) {
                    displayFeedback(feedbacks[i]);
                }
                break;

            case 3:
                printf("Exiting the system. Thank you!\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}