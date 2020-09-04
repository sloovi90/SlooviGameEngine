#include "Logger.h"
#include "spdlog/sinks/stdout_color_sinks.h"
namespace Sloovi {


	std::shared_ptr < spdlog::logger> Logger::m_ClientLogger;
	std::shared_ptr < spdlog::logger> Logger::m_CoreLogger;

	void Logger::Init()
	{
		m_CoreLogger = spdlog::stdout_color_mt("SLOOVI");
		m_CoreLogger->set_pattern("%^[%T][%l]%n: %v%$");
		m_CoreLogger->set_level(spdlog::level::trace);

		m_ClientLogger = spdlog::stdout_color_mt("APP");
		m_ClientLogger->set_pattern("%^[%T][%l]%n: %v%$");
		m_ClientLogger->set_level(spdlog::level::trace);

	}

}
