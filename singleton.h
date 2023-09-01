#pragma once

template<typename T>
class Singleton {
	T data;
	Singleton() : data{} {}
	Singleton(const Singleton& obj) = delete;
	Singleton& operator = (const Singleton& obj) = delete;
	Singleton(Singleton&& obj) = delete;
	Singleton& operator = (Singleton&& obj) = delete;
public:
	void set_data(T obj) {
		data = obj;
	}
	T get_data() {
		return data;
	}
	static Singleton& Instance() {
		static Singleton obj;
		return obj;
	}
};