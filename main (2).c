#include <stdio.h>

int
main ()
{
  int age;
  printf ("ENTER YOUR AGE: ");
  scanf ("%d", &age);

  char gender;
  printf ("ENTER YOUR GENDER ('m' for male, 'f' for female): ");
  scanf (" %c", &gender);

  float height;
  printf ("ENTER YOUR HEIGHT 'cm' : ");
  scanf ("%f", &height);

  float weight;
  printf ("ENTER YOUR WEIGHT 'kilograms' : ");
  scanf ("%f", &weight);

  float bmi = weight / (height * height);


  if (bmi < 18.5)
    {
      printf
	("You are underweight.\nConsider taking these: avocado, peanuts, hazelnuts, cashews and almonds, margarine spreads, olive oil, canola oil and peanuts,fish and seafood.\n");
    }
  else if (bmi >= 18.5 && bmi < 24.9)
    {
      printf
	("You are within a healthy weight range.\nMaintain a balanced diet and exercise regularly.\n");
    }
  else if (bmi >= 24.9 && bmi < 29.9)
    {
      printf
	("You are overweight.\nFocus on portion control and increase physical activity, increase intake of calcium, catechins, and iodine. Seeds, including poppy, sesame, celery, and chia seeds. Yogurt is a source of calcium. Many types of yogurt are also rich in probiotics, a type of beneficial bacteria that can promote immune function, improve heart health, and enhance nutrient absorption.\n");
    }
  else
    {
      printf
	("You are obese.\n Consult a healthcare professional for personalized advice.\n");
    }
  int Exercise;
  printf ("ENTER THE NUMBER OF MINTUES YOU EXERSISE DAILY: ");
  scanf ("%d", &Exercise);

  if (Exercise >= 150)
    {
      printf
	("Congratulations! You meet the recommended exercise guidelines.\n");
    }
  else
    {
      printf
	("Consider increasing the duration of your daily exercise to meet the recommended guidelines.\n");
    }
  float sugarIntake;
  printf ("ENTER YOUR DAILY SUGAR INTAKE 'grams':\t ");
  scanf ("%f", &sugarIntake);

  if (sugarIntake <= 25)
    {
      printf ("Your daily sugar intake is within the recommended limit.\n");
    }
  else
    {
      printf
	("Limit your daily sugar intake to improve your overall health.\n");
    }

  int x, y;
  printf ("ENTER YOUR BLOOD PRESSURE (systolic):\t ");
  scanf ("%d", &x);
  printf ("ENTER YOUR BLOOD PRESSURE (diastolic):\t ");
  scanf ("%d", &y);

  if (x < 90 || y < 60)
    {
      printf
	("Your blood pressure is low.\n Please consume plenty of grapefruit, oranges, lime, apricots, and avocados.\n");
    }
  else if ((x >= 90 && x <= 120) && (y >= 60 && y <= 80))
    {
      printf ("Your blood pressure is within a healthy range.");
    }
  else if ((x > 120 && x <= 130) || (y > 80 && y <= 89))
    {
      printf
	("Your blood pressure is high.\n Consume beans and lentils, berries, and whole grains.\n");
    }
  else
    {
      printf
	("Your blood pressure is extremely high.\nIt is recommended to consult a healthcare professional for further evaluation and advice.\n");
    }

  return 0;
}
