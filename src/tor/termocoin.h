/* Copyright (c) 2014, Termocoin Developers */
/* See LICENSE for licensing information */

/**
 * \file Termocoin.h
 * \brief Headers for Termocoin.cpp
 **/

#ifndef TOR_RAZOR_H
#define TOR_RAZOR_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* razor_tor_data_directory(
    );

    char const* razor_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

