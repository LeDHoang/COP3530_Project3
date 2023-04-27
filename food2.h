#pragma once
// Project 3, Bryan Quintero & Hoang Le Duc
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <chrono>
#include <string>
#include <array>
#include <utility>
#include <list>
#include <Windows.h>

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Runtime::CompilerServices;

ref class food2
{
public:
    int id;
    String^ name;
    float protein, carb, sugar, fiber, fat, cholest, vitA, thiamin, ribo, niacin, vitB6, folate, choline, vitB12, vitC, vitD,
        vitE, vitK, calcium, phosph, mag, iron, zinc, copper, selen, pot, sodium;
    food2() {};

    food2(String^ a, String^ b, String^ c, String^ d, String^ e, String^ f, String^ g, String^ h, String^ i, String^ j, String^ k, String^ l,
        String^ m, String^ n, String^ o, String^ p, String^ q, String^ r, String^ s, String^ t, String^ u, String^ v, String^ w,
        String^ x, String^ y, String^ z, String^ aa, String^ ab, String^ ac) : id(Convert::ToInt32(a)), name(b), protein(Convert::ToSingle(c)), carb(Convert::ToSingle(d)),
        sugar(Convert::ToSingle(e)), fiber(Convert::ToSingle(f)), fat(Convert::ToSingle(g)), cholest(Convert::ToSingle(h)), vitA(Convert::ToSingle(i)), thiamin(Convert::ToSingle(j)),
        ribo(Convert::ToSingle(k)), niacin(Convert::ToSingle(l)), vitB6(Convert::ToSingle(m)), folate(Convert::ToSingle(n)), choline(Convert::ToSingle(o)), vitB12(Convert::ToSingle(p)),
        vitC(Convert::ToSingle(q)), vitD(Convert::ToSingle(r)), vitE(Convert::ToSingle(s)), vitK(Convert::ToSingle(t)), calcium(Convert::ToSingle(u)), phosph(Convert::ToSingle(v)),
        mag(Convert::ToSingle(w)), iron(Convert::ToSingle(x)), zinc(Convert::ToSingle(y)), copper(Convert::ToSingle(z)), selen(Convert::ToSingle(aa)), pot(Convert::ToSingle(ab)), sodium(Convert::ToSingle(ac)) {};
    food2^ add(String^ full)
    {
        String^ id = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ name = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        String^ protein = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ carb = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ sugar = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ fiber = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ fat = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        String^ cholesterol = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ retinol = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ vitA = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        String^ thiamin = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ riboflavin = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ niacin = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ vitB6 = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        String^ folate = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ choline = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ vitB12 = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        String^ vitC = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ vitD = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ vitE = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        full = full->Substring(full->IndexOf(',') + 1);
        String^ vitK = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ calcium = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ phosphorus = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ mag = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ iron = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ zinc = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ copper = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ selen = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ pot = full->Substring(0, full->IndexOf(','));
        full = full->Substring(full->IndexOf(',') + 1);
        String^ sodium = full->Substring(0, full->IndexOf(','));
        return gcnew food2(id, name, protein, carb, sugar, fiber, fat, cholesterol, vitA, thiamin, riboflavin, niacin, vitB6, folate, choline, vitB12,
            vitC, vitD, vitE, vitK, calcium, phosphorus, mag, iron, zinc, copper, selen, pot, sodium);

    };
    /**The add function will go through every row in the Excel sheet and collect only the necessary data, add them to a new
    food object and return it.*/
    void merge(cli::array<System::Collections::Generic::KeyValuePair<float, System::String^>>^ toMSort, int left, int mid, int right)
    {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        cli::array<System::Collections::Generic::KeyValuePair<float, System::String^>>^ X = gcnew cli::array<System::Collections::Generic::KeyValuePair<float, System::String^>>(n1);
        cli::array<System::Collections::Generic::KeyValuePair<float, System::String^>>^ Y = gcnew cli::array<System::Collections::Generic::KeyValuePair<float, System::String^>>(n2);
        for (int i = 0; i < n1; i++)
        {
            X[i] = toMSort[left + i];
        }
        for (int j = 0; j < n2; j++)
        {
            Y[j] = toMSort[mid + 1 + j];
        }
        int i = 0;
        int j = 0;
        int k = left;
        while (i < n1 && j < n2)
        {
            if (X[i].Key <= Y[j].Key)
            {
                toMSort[k] = X[i];
                i++;
            }
            else
            {
                toMSort[k] = Y[j];
                j++;
            }
            k++;
        }
        while (i < n1)
        {
            toMSort[k] = X[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            toMSort[k] = Y[j];
            j++;
            k++;
        }
    }
    void mergeSort(cli::array<KeyValuePair<float, String^>, 1>^ toMSort, int left, int right)
    {
        if (left < right)
        {
            int mid = left + (right - left) / 2;
            mergeSort(toMSort, left, mid);
            mergeSort(toMSort, mid + 1, right);
            merge(toMSort, left, mid, right);
        }
    }

    // Modified from Merge Sort code on page 89 of "6-Sorting" PowerPoint on Canvas.
    void insertionSort(cli::array<System::Collections::Generic::KeyValuePair<float, System::String^>>^% toISort, int left, int right)
    {
        for (int i = left + 1; i < right; i++)
        {
            System::Collections::Generic::KeyValuePair<float, System::String^> key = toISort[i];
            int j = i - 1;
            while (j > left && toISort[j].Key > key.Key)
            {
                toISort[j + 1] = toISort[j];
                j--;
            }
            toISort[j + 1] = key;
        }
    }
    // Modified from Insertion Sort code on page 38 of "6-Sorting" PowerPoint on Canvas.
    // 
    //// LIST INSTEAD OF ARRAY??
    void timSort(cli::array<System::Collections::Generic::KeyValuePair<float, System::String^>>^ toTSort, int max)
    {
        int run = 76;
        for (int i = 0; i < max; i += run)
        {
            insertionSort(toTSort, i, Math::Min((i + run - 1), max));
        }
        for (int size = run; size < max; size = 2 * size)
        {
            for (int left = 0; left < max; left += 2 * size)
            {
                int mid = left + size - 1;
                int right = Math::Min((left + 2 * size - 1), (max));
                if (mid < right)
                {
                    merge(toTSort, left, mid, right);
                }
            }
        }
    }

    /**Idea gotten from Other Sorts slide on page 125 of "6-Sorting" PowerPoint on Canvas. What Tim Sort is and how it works
    was obtained form GeeksforGeeks, and our version was modified from there. In essence, it is a merge sort that uses insertion
    sort on the split sections (arbitrarily chosen at 76, that double in size) to sort them, before merge combines those sections, until the vector is
    eventually sorted. Link: https://www.geeksforgeeks.org/timsort/*/
    System::String^ parseNutrient(System::String^ toParse)
    {
        toParse = toParse->Substring(0, toParse->IndexOf(' '));
        return toParse;
    }

    System::String^ parseValue(System::String^ toParse)
    {
        toParse = toParse->Substring(toParse->IndexOf(' '));
        return toParse;
    }
    List<KeyValuePair<float, String^>>^ cycle(List<KeyValuePair<float, String^>>^ nutrientList, float limit, int option)
    {
        List<KeyValuePair<float, String^>>^ toReturn = gcnew List<KeyValuePair<float, String^>>();
        int top = 5;
        if (option == 1)
        {
            for (int x = 0; x < top; x++)
            {
                if (nutrientList[x].Key <= limit)
                {
                    toReturn->Add(nutrientList[x]);
                }
                else
                {
                    top++;
                }
            }
        }
        else if (option == 2)
        {
            for (int x = 0; x < top; x++)
            {
                if (nutrientList[nutrientList->Count - 1 - x].Key <= limit)
                {
                    toReturn->Add(nutrientList[nutrientList->Count - 1 - x]);
                }
                else
                {
                    top++;
                }
            }
        }
        return toReturn;
    }
    System::String^ ReturnResult(System::String^ inputString)
    {
        String^ result;
        System::IO::StreamReader^ data = gcnew System::IO::StreamReader("FNDDS Formatted.txt");
        const float proteinAvg = 50, carbAvg = 275, sugarAvg = 50, fiberAvg = 28, fatAvg = 78, cholestAvg = 300, vitAAvg = 900, thiaminAvg = 1.2,
            riboAvg = 1.3, niacinAvg = 16, vitB6Avg = 1.7, folateAvg = 400, cholineAvg = 550, vitB12Avg = 2.4, vitCAvg = 90, vitDAvg = 20,
            vitEAvg = 15, vitKAvg = 120, calciumAvg = 1300, phosphAvg = 1250, magAvg = 420, ironAvg = 18, zincAvg = 11, copperAvg = 0.9,
            selenAvg = 55, potAvg = 4700, sodiumAvg = 2300;
        List<food2^>^ all = gcnew List<food2^>();
        while (data->EndOfStream == false)
        {
            String^ fullRow = data->ReadLine();
            all->Add(add(fullRow));
        }
        array<List<KeyValuePair<float, String^>>^>^ table = gcnew array<List<KeyValuePair<float, String^>>^>(27);

        for (int i = 0; i < 27; i++)
        {
            table[i] = gcnew List<KeyValuePair<float, String^>>();
        }

        for each (food2 ^ x in all)
        {
            table[0]->Add(KeyValuePair<float, String^>(x->protein, x->name));
            table[1]->Add(KeyValuePair<float, String^>(x->carb, x->name));
            table[2]->Add(KeyValuePair<float, String^>(x->sugar, x->name));
            table[3]->Add(KeyValuePair<float, String^>(x->fiber, x->name));
            table[4]->Add(KeyValuePair<float, String^>(x->fat, x->name));
            table[5]->Add(KeyValuePair<float, String^>(x->cholest, x->name));
            table[6]->Add(KeyValuePair<float, String^>(x->vitA, x->name));
            table[7]->Add(KeyValuePair<float, String^>(x->thiamin, x->name));
            table[8]->Add(KeyValuePair<float, String^>(x->ribo, x->name));
            table[9]->Add(KeyValuePair<float, String^>(x->niacin, x->name));
            table[10]->Add(KeyValuePair<float, String^>(x->vitB6, x->name));
            table[11]->Add(KeyValuePair<float, String^>(x->folate, x->name));
            table[12]->Add(KeyValuePair<float, String^>(x->choline, x->name));
            table[13]->Add(KeyValuePair<float, String^>(x->vitB12, x->name));
            table[14]->Add(KeyValuePair<float, String^>(x->vitC, x->name));
            table[15]->Add(KeyValuePair<float, String^>(x->vitD, x->name));
            table[16]->Add(KeyValuePair<float, String^>(x->vitE, x->name));
            table[17]->Add(KeyValuePair<float, String^>(x->vitK, x->name));
            table[18]->Add(KeyValuePair<float, String^>(x->calcium, x->name));
            table[19]->Add(KeyValuePair<float, String^>(x->phosph, x->name));
            table[20]->Add(KeyValuePair<float, String^>(x->mag, x->name));
            table[21]->Add(KeyValuePair<float, String^>(x->iron, x->name));
            table[22]->Add(KeyValuePair<float, String^>(x->zinc, x->name));
            table[23]->Add(KeyValuePair<float, String^>(x->copper, x->name));
            table[24]->Add(KeyValuePair<float, String^>(x->selen, x->name));
            table[25]->Add(KeyValuePair<float, String^>(x->pot, x->name));
            table[26]->Add(KeyValuePair<float, String^>(x->sodium, x->name));
        }
        array<String^>^ lines = inputString->Split(gcnew array<String^>{ "\r\n", "\n" }, StringSplitOptions::None);
        for each (String ^ line in lines)
        {
            array<String^>^ parts = line->Trim()->Split(' ');

            // Extract the nutrient and value from the line
            if (parts->Length >= 2) {
                // Extract the nutrient and value from the line
                Console::WriteLine("String: " + line);
                String^ nutrient = parts[0];
                int value = Int32::Parse(parts[1]);
                Console::WriteLine("Nutrient: " + nutrient);
                Console::WriteLine("Value: " + value);

                if (nutrient == "protein")
                {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[0]->ToArray(), 0, table[0]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[0]->ToArray(), table[0]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    /**For each nutrient, it will first sort the row of the table that contains that nutrient, first using Merge
                    Sort, and the using Tim Sort. Both are timed and will be printed out later. The method of timing was obtained
                    from GeeksforGeeks, Link: https://www.geeksforgeeks.org/measure-execution-time-function-cpp/*/
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < proteinAvg)
                    {
                        toPrint = cycle(table[0], proteinAvg - value, 2);
                        result += "Recommendations to raise Protein (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                        /**If the value is lower than the recommended average, then it will call cycle to return the highest values
                        still under the average AND the value they of what they already consume on a daily basis, for the top 5
                        to be printed out. The time it took for each sort is then printed at the end as well.*/
                    }
                    else if (value > proteinAvg)
                    {
                        toPrint = cycle(table[0], proteinAvg, 1);
                        result += "Recommendations to lower Protein (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                        /**If the value is lower than the recommended average, then it will call cycle to return the lowest 5 values
                        to be printed out. The time it took for each sort is then printed at the end as well.*/
                    }
                    else if (value == proteinAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Protein. Keep up the good work!\r\n\r\n";
                    }
                    /**If the input value is actually equal to the recommended average, it will congratulate them and move on.
                    This code is the same for all the remaining 26 nutrients, the only difference being what row of th table to
                    send to be sorted.*/
                }
                else if (nutrient == "carbs")
                {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[1]->ToArray(), 0, table[1]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[1]->ToArray(), table[1]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < carbAvg)
                    {
                        toPrint = cycle(table[1], carbAvg - value, 2);
                        result += "Recommendations to raise Carbohydrates (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > carbAvg)
                    {
                        toPrint = cycle(table[1], carbAvg, 1);
                        result += "Recommendations to lower Carbohydrates (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == carbAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Carbohydrates. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "sugar") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[2]->ToArray(), 0, table[2]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[2]->ToArray(), table[2]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < sugarAvg)
                    {
                        toPrint = cycle(table[2], sugarAvg - value, 2);
                        result += "Recommendations to raise Sugar (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- "+ pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > sugarAvg)
                    {
                        toPrint = cycle(table[2], sugarAvg, 1);
                        result += "Recommendations to lower Sugar (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == sugarAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Sugar. Keep up the good work!" + "\r\n";
                    }
                }
                else if (nutrient == "fiber") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[3]->ToArray(), 0, table[3]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[3]->ToArray(), table[3]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < fiberAvg)
                    {
                        toPrint = cycle(table[3], fiberAvg - value, 2);
                        result += "Recommendations to raise Fiber (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > fiberAvg)
                    {
                        toPrint = cycle(table[3], fiberAvg, 1);
                        result += "Recommendations to lower Fiber (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == fiberAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Fiber. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "fat") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[4]->ToArray(), 0, table[4]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[4]->ToArray(), table[4]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < fatAvg)
                    {
                        toPrint = cycle(table[4], fatAvg - value, 2);
                        result += "Recommendations to raise Fat (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > fatAvg)
                    {
                        toPrint = cycle(table[4], fatAvg, 1);
                        result += "Recommendations to lower Fat (in grams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == fatAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Fat. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "cholesterol") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[5]->ToArray(), 0, table[5]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[5]->ToArray(), table[5]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < cholestAvg)
                    {
                        toPrint = cycle(table[5], cholestAvg - value, 2);
                        result += "Recommendations to raise Cholesterol (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > cholestAvg)
                    {
                        toPrint = cycle(table[5], cholestAvg, 1);
                        result += "Recommendations to lower Cholesterol (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == cholestAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Cholesterol. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "vitA") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[6]->ToArray(), 0, table[6]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[6]->ToArray(), table[6]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < vitAAvg)
                    {
                        toPrint = cycle(table[6], vitAAvg - value, 2);
                        result += "Recommendations to raise Vitamin A (in RFA micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key+"\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > vitAAvg)
                    {
                        toPrint = cycle(table[6], vitAAvg, 1);
                        result += "Recommendations to lower Vitamin A (in RFA micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == vitAAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Vitamin A. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "thiamin") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[7]->ToArray(), 0, table[7]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[7]->ToArray(), table[7]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < thiaminAvg)
                    {
                        toPrint = cycle(table[7], thiaminAvg - value, 2);
                        result += "Recommendations to raise Thiamin (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > thiaminAvg)
                    {
                        toPrint = cycle(table[7], thiaminAvg, 1);
                        result += "Recommendations to lower Thiamin (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == thiaminAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Thiamin. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "riboflavin") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[8]->ToArray(), 0, table[8]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[8]->ToArray(), table[8]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < riboAvg)
                    {
                        toPrint = cycle(table[8], riboAvg - value, 2);
                        result += "Recommendations to raise Riboflavin (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > riboAvg)
                    {
                        toPrint = cycle(table[8], riboAvg, 1);
                        result += "Recommendations to lower Riboflavin (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == riboAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Riboflavin. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "niacin") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[9]->ToArray(), 0, table[9]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[9]->ToArray(), table[9]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < niacinAvg)
                    {
                        toPrint = cycle(table[9], niacinAvg - value, 2);
                        result += "Recommendations to raise Niacin (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > niacinAvg)
                    {
                        toPrint = cycle(table[9], niacinAvg, 1);
                        result += "Recommendations to lower Niacin (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == niacinAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Niacin. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "vitB6") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[10]->ToArray(), 0, table[10]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[10]->ToArray(), table[10]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < vitB6Avg)
                    {
                        toPrint = cycle(table[10], vitB6Avg - value, 2);
                        result += "Recommendations to raise Vitamin B6 (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > vitB6Avg)
                    {
                        toPrint = cycle(table[10], vitB6Avg, 1);
                        result += "Recommendations to lower Vitamin B6 (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == vitB6Avg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Vitamin B6. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "folate") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[11]->ToArray(), 0, table[11]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[11]->ToArray(), table[11]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < folateAvg)
                    {
                        toPrint = cycle(table[11], folateAvg - value, 2);
                        result += "Recommendations to raise Folate (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > folateAvg)
                    {
                        toPrint = cycle(table[11], folateAvg, 1);
                        result += "Recommendations to lower Folate (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == folateAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Folate. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "choline") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[12]->ToArray(), 0, table[12]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[12]->ToArray(), table[12]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < cholineAvg)
                    {
                        toPrint = cycle(table[12], cholineAvg - value, 2);
                        result += "Recommendations to raise Choline (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > cholineAvg)
                    {
                        toPrint = cycle(table[12], cholineAvg, 1);
                        result += "Recommendations to lower Choline (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == cholineAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Choline. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "vitB12") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[13]->ToArray(), 0, table[13]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[13]->ToArray(), table[13]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < vitB12Avg)
                    {
                        toPrint = cycle(table[13], vitB12Avg - value, 2);
                        result += "Recommendations to raise Vitamin B12 (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > vitB12Avg)
                    {
                        toPrint = cycle(table[13], vitB12Avg, 1);
                        result += "Recommendations to lower Vitamin B12 (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == vitB12Avg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Vitamin B12. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "vitC") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[14]->ToArray(), 0, table[14]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[14]->ToArray(), table[14]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < vitCAvg)
                    {
                        toPrint = cycle(table[14], vitCAvg - value, 2);
                        result += "Recommendations to raise Vitamin C (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > vitCAvg)
                    {
                        toPrint = cycle(table[14], vitCAvg, 1);
                        result += "Recommendations to lower Vitamin C (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == vitCAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Vitamin C. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "vitD") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[15]->ToArray(), 0, table[15]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[15]->ToArray(), table[15]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < vitDAvg)
                    {
                        toPrint = cycle(table[15], vitDAvg - value, 2);
                        result += "Recommendations to raise Vitamin D (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > vitDAvg)
                    {
                        toPrint = cycle(table[15], vitDAvg, 1);
                        result += "Recommendations to lower Vitamin D (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == vitDAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Vitamin D. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "vitE") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[16]->ToArray(), 0, table[16]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[16]->ToArray(), table[16]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < vitEAvg)
                    {
                        toPrint = cycle(table[16], vitEAvg - value, 2);
                        result += "Recommendations to raise Vitamin E (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > vitEAvg)
                    {
                        toPrint = cycle(table[16], vitEAvg, 1);
                        result += "Recommendations to lower Vitamin E (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == vitEAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Vitamin E. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "vitK") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[17]->ToArray(), 0, table[17]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[17]->ToArray(), table[17]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < vitKAvg)
                    {
                        toPrint = cycle(table[17], vitKAvg - value, 2);
                        result += "Recommendations to raise Vitamin K (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > vitKAvg)
                    {
                        toPrint = cycle(table[17], vitKAvg, 1);
                        result += "Recommendations to lower Vitamin K (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == vitKAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Vitamin K. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "calcium") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[18]->ToArray(), 0, table[18]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[18]->ToArray(), table[18]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < calciumAvg)
                    {
                        toPrint = cycle(table[18], calciumAvg - value, 2);
                        result += "Recommendations to raise Calcium (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > calciumAvg)
                    {
                        toPrint = cycle(table[18], calciumAvg, 1);
                        result += "Recommendations to lower Calcium (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == calciumAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Calcium. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "phosphorus") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[19]->ToArray(), 0, table[19]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[19]->ToArray(), table[19]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < phosphAvg)
                    {
                        toPrint = cycle(table[19], phosphAvg - value, 2);
                        result += "Recommendations to raise Phosphorus (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > phosphAvg)
                    {
                        toPrint = cycle(table[19], phosphAvg, 1);
                        result += "Recommendations to lower Phosphorus (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == phosphAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Phosphorus. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "magnesium") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[20]->ToArray(), 0, table[20]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[20]->ToArray(), table[20]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < magAvg)
                    {
                        toPrint = cycle(table[20], magAvg - value, 2);
                        result += "Recommendations to raise Magnesium (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key+"\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > magAvg)
                    {
                        toPrint = cycle(table[20], magAvg, 1);
                        result += "Recommendations to lower Magnesium (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == magAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Magnesium. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "iron") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[21]->ToArray(), 0, table[21]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[21]->ToArray(), table[21]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < ironAvg)
                    {
                        toPrint = cycle(table[21], ironAvg - value, 2);
                        result += "Recommendations to raise Iron (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > ironAvg)
                    {
                        toPrint = cycle(table[21], ironAvg, 1);
                        result += "Recommendations to lower Iron (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == ironAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Iron. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "zinc") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[22]->ToArray(), 0, table[22]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[22]->ToArray(), table[22]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < zincAvg)
                    {
                        toPrint = cycle(table[22], zincAvg - value, 2);
                        result += "Recommendations to raise Zinc (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > zincAvg)
                    {
                        toPrint = cycle(table[22], zincAvg, 1);
                        result += "Recommendations to lower Zinc (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == zincAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Zinc. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "copper") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[23]->ToArray(), 0, table[23]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[23]->ToArray(), table[23]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < copperAvg)
                    {
                        toPrint = cycle(table[23], copperAvg - value, 2);
                        result += "Recommendations to raise Copper (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > copperAvg)
                    {
                        toPrint = cycle(table[23], copperAvg, 1);
                        result += "Recommendations to lower Copper (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == copperAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Copper. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "selenium") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[24]->ToArray(), 0, table[24]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[24]->ToArray(), table[24]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < selenAvg)
                    {
                        toPrint = cycle(table[24], selenAvg - value, 2);
                        result += "Recommendations to raise Selenium (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > selenAvg)
                    {
                        toPrint = cycle(table[24], selenAvg, 1);
                        result += "Recommendations to lower Selenium (in micrograms):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == selenAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Selenium. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "potassium") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[25]->ToArray(), 0, table[25]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[25]->ToArray(), table[25]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < potAvg)
                    {
                        toPrint = cycle(table[25], potAvg - value, 2);
                        result += "Recommendations to raise Potassium (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > potAvg)
                    {
                        toPrint = cycle(table[25], potAvg, 1);
                        result += "Recommendations to lower Potassium (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == potAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Potassium. Keep up the good work!" + "\r\n\r\n";
                    }
                }
                else if (nutrient == "sodium") {
                    auto startM = std::chrono::high_resolution_clock::now();
                    mergeSort(table[26]->ToArray(), 0, table[26]->ToArray()->Length - 1);
                    auto endM = std::chrono::high_resolution_clock::now();
                    auto durationM = std::chrono::duration_cast<std::chrono::milliseconds>(endM - startM);
                    auto startT = std::chrono::high_resolution_clock::now();
                    timSort(table[26]->ToArray(), table[26]->ToArray()->Length - 1);
                    auto endT = std::chrono::high_resolution_clock::now();
                    auto durationT = std::chrono::duration_cast<std::chrono::milliseconds>(endT - startT);
                    List<KeyValuePair<float, String^>>^ toPrint = gcnew List<KeyValuePair<float, String^>>();
                    if (value < sodiumAvg)
                    {
                        toPrint = cycle(table[26], sodiumAvg - value, 2);
                        result += "Recommendations to raise Sodium (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value > sodiumAvg)
                    {
                        toPrint = cycle(table[26], sodiumAvg, 1);
                        result += "Recommendations to lower Sodium (in milligrams):" + "\r\n";
                        for each (KeyValuePair<float, String^> ^ pair in toPrint)
                        {
                            result += "- " + pair->Value + ": " + pair->Key + "\r\n";
                        }
                        result += "Time taken to sort results using Merge Sort (in milliseconds) " + durationM.count() + "\r\n";
                        result += "Time taken to sort results using Tim Sort (in milliseconds) " + durationT.count() + "\r\n\r\n";
                    }
                    else if (value == sodiumAvg)
                    {
                        result += "Your daily consumption actually meets the recommended daily average for Sodium. Keep up the good work!" + "\r\n\r\n";
                    }
                }

            }
        }
        return result;
    }

};



