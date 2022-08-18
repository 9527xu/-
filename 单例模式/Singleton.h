#pragma once
// ����ʵ�� /

class Singleton
{
public:
    // ��ȡ��ʵ��
    static Singleton* GetInstance();

    // �ͷŵ�ʵ���������˳�ʱ����
    static void deleteInstance();

    // ��ӡʵ����ַ
    void Print();

private:
    // ���乹���������Ϊ˽�е�, ��ֹ�ⲿ���������
    Singleton();
    ~Singleton();

    // ���俽������͸�ֵ�����Ϊ˽�к���, ��ֹ�ⲿ�����͸�ֵ
    Singleton(const Singleton& signal);
    const Singleton& operator=(const Singleton& signal);

private:
    // Ψһ��ʵ������ָ��
    static Singleton* g_pSingleton;
};
