#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1i/lab8.1i.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTLabTest
{
    TEST_CLASS(UTLabTest)
    {
    public:
        // ���������� ������� CountOccurrences
        TEST_METHOD(TestCountOccurrences)
        {
            const char* testStr = "a+b=c-";  // ������� ����� ��� �����
            int result = CountOccurrences(testStr);
            Assert::AreEqual(result, 3);  // ��������, �� �������� 3 ������� "+", "-", "="
        }

        // ���������� ������� ReplaceSymbols
        TEST_METHOD(TestReplaceSymbols)
        {
            // ������� ����� ��� �����
            char testStr[] = "a+b=c-";

            // ��������� ������� ����� �������
            ReplaceSymbols(testStr);

            // ����������, �� ����� ������� ���������
            Assert::AreEqual(testStr, "a**c**");  // ���������� ���������
        }

        // ���������� ������� CountOccurrences � ������� ������
        TEST_METHOD(TestCountOccurrencesEmptyString)
        {
            const char* testStr = "";  // ������� �����
            int result = CountOccurrences(testStr);
            Assert::AreEqual(result, 0);  // ������� ���� 0 �������
        }

        // ���������� ������� ReplaceSymbols � ������ ��� ������� �������
        TEST_METHOD(TestReplaceSymbolsNoChanges)
        {
            // ����� ��� ������� "+", "-", "="
            char testStr[] = "abcdef";

            // ��������� ������� ����� �������
            ReplaceSymbols(testStr);

            // ����������, �� ����� �� �������
            Assert::AreEqual(testStr, "abcdef");  // ���������� ���������
        }
    };
}
