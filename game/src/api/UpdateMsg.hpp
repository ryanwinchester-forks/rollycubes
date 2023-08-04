
#pragma once

#include <optional>

namespace API {
    enum class UpdateMsgType : int;
}

namespace API {

    struct UpdateMsg {
        int64_t id;
        std::optional<bool> reset;
        int64_t score;
        UpdateMsgType type = static_cast<UpdateMsgType>(0);
        std::optional<std::vector<bool>> used;
    };
}
