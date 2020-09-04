#pragma once
#include "CoreConfig.h"
#include "spdlog/spdlog.h"
#include <memory>

 namespace Sloovi {

	class SGE_API Logger
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return m_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return m_ClientLogger; }
	private:
		 static std::shared_ptr<spdlog::logger> m_CoreLogger;
		 static std::shared_ptr<spdlog::logger> m_ClientLogger;
			
	};

}


 //Core log Macros
#define SGE_CORE_TRACE(...) ::Sloovi::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define SGE_CORE_INFO(...) ::Sloovi::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define SGE_CORE_WARN(...) ::Sloovi::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define SGE_CORE_ERROR(...) ::Sloovi::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define SGE_CORE_FATAL(...) ::Sloovi::Logger::GetCoreLogger()->fatal(__VA_ARGS__)

 //App log Macros
#define SGE_TRACE(...) ::Sloovi::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define SGE_INFO(...)  ::Sloovi::Logger::GetClientLogger()->info(__VA_ARGS__)
#define SGE_WARN(...)  ::Sloovi::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define SGE_ERROR(...) ::Sloovi::Logger::GetClientLogger()->error(__VA_ARGS__)
#define SGE_FATAL(...) ::Sloovi::Logger::GetClientLogger()->fatal(__VA_ARGS__)