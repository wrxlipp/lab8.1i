#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1i/lab8.1i.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTLabTest
{
    TEST_CLASS(UTLabTest)
    {
    public:
        // Тестування функції CountOccurrences
        TEST_METHOD(TestCountOccurrences)
        {
            const char* testStr = "a+b=c-";  // Приклад рядка для тесту
            int result = CountOccurrences(testStr);
            Assert::AreEqual(result, 3);  // Перевірка, чи знайдено 3 символи "+", "-", "="
        }

        // Тестування функції ReplaceSymbols
        TEST_METHOD(TestReplaceSymbols)
        {
            // Приклад рядка для тесту
            char testStr[] = "a+b=c-";

            // Викликаємо функцію заміни символів
            ReplaceSymbols(testStr);

            // Перевіряємо, чи рядок змінений правильно
            Assert::AreEqual(testStr, "a**c**");  // Очікуваний результат
        }

        // Тестування функції CountOccurrences з порожнім рядком
        TEST_METHOD(TestCountOccurrencesEmptyString)
        {
            const char* testStr = "";  // Порожній рядок
            int result = CountOccurrences(testStr);
            Assert::AreEqual(result, 0);  // Повинно бути 0 символів
        }

        // Тестування функції ReplaceSymbols з рядком без шуканих символів
        TEST_METHOD(TestReplaceSymbolsNoChanges)
        {
            // Рядок без символів "+", "-", "="
            char testStr[] = "abcdef";

            // Викликаємо функцію заміни символів
            ReplaceSymbols(testStr);

            // Перевіряємо, чи рядок не змінився
            Assert::AreEqual(testStr, "abcdef");  // Очікуваний результат
        }
    };
}
