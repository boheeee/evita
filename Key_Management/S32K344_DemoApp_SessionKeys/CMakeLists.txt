# 최소 CMake 버전 설정
cmake_minimum_required(VERSION 3.10)

# 프로젝트 이름 설정
project(S32K344_DemoApp_SessionKeys)

# C 표준 설정
set(CMAKE_C_STANDARD 11)

# 빌드 타입 설정 (Debug 또는 Release)
set(CMAKE_BUILD_TYPE Debug)

# 소스 파일 및 헤더 디렉토리 설정
set(SRC 
    src/main.c
    src/helper.c  # 필요 시 추가
)

include_directories(
    include
    framework
    framework/host_hse
    interface
    services
)

# 라이브러리 경로 추가 (필요 시)
link_directories(/usr/lib)

# 실행 파일 이름 설정
add_executable(session_keys_example ${SRC})

# 링크 라이브러리 설정
target_link_libraries(session_keys_example ssl crypto)

# 컴파일 옵션 추가 (선택 사항)
add_compile_options(-Wall -Wextra)
