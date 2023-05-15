#pragma once

#include <vector>
#include <string>

namespace LibtorrentNode
{
    const std::string INCORRECT_AGUMENTS_SUPPLIED = "Incorrect arguments supplied. ";
    const std::vector<std::string> ERRORS = {
        "Expected usage is 'addTorrent(file_path: string, magnet_uri: string)'",
        "Expected usage is 'getTorrent(id: nunmber)'",
        "Expected usage is 'setLimit(limit: number, type: string)'",
        "Error while pausing torrent",
        "Error while resuming torrent",
        "Error while getting torrent files",
        "Expected usage is 'removeTorrent(id: number)'",
    };

    /**
     * @brief A helper function to construct error messages
     * Eg. buildErrorMessage({ INCORRECT_ARGUMENTS_SUPPLIED, ERRORS[1], exception.what() })
     *
     * @param parts Initializer list for std::vector< std::string > &
     * @return const std::string
     */
    const std::string buildErrorMessage(const std::vector<std::string> &parts);
} // namespace LibtorentNode
