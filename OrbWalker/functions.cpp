#include "pch.h"

namespace Functions {
    fnPrintChat PrintChat{};
    fnIssueOrder IssueOrder{};
    fnGetAttackCastDelay GetAttackCastDelay{};
    fnGetAttackDelay GetAttackDelay{};
    fnIsAlive IsAlive{};
    fnGetRadius GetRadius{};

    void Initialize() {
        PrintChat = (fnPrintChat) Offsets::oPrintChat;
        IssueOrder = (fnIssueOrder) Offsets::oIssueOrder;
        GetAttackCastDelay = (fnGetAttackCastDelay) Offsets::oGetAttackCastDelay;
        GetAttackDelay = (fnGetAttackDelay) Offsets::oGetAttackDelay;
        IsAlive = (fnIsAlive) Offsets::oIsAlive;
        GetRadius = (fnGetRadius) Offsets::oGetRadius;
    }

    bool IsChatOpen() {
        return *(bool *) (*(uintptr_t *) Offsets::oChatClient + 0x820);
    }

    bool IsLeagueInBackground() {
        return *(bool *) (*(uintptr_t *) Offsets::oHudInstance + 0x69);
    }

    uint64_t GetGameTime() {
        using namespace std::chrono;
        static const auto start_time = steady_clock::now();
        const auto elapsed_time = steady_clock::now() - start_time;
        return duration_cast<milliseconds>(elapsed_time).count();
//        return std::chrono::system_clock::now().
        //return GetTickCount64();
        //return static_cast<uint64_t>(*(float *) Offsets::oGameTime * 1000);
    }

}