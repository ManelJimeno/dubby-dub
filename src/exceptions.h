/**
 * dubby-dub
 *
 * Copyright (C) 2020, Loïc Le Page
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include <exception>

class UnrecoverableError final : public std::exception
{
  public:
    const char* what() const noexcept
    {
        return "unrecoverable error";
    }
};

class InvalidStateException final : public std::exception
{
  public:
    const char* what() const noexcept
    {
        return "invalid state";
    }
};

class NoEncoderException final : public std::exception
{
  public:
    const char* what() const noexcept
    {
        return "no encoder available";
    }
};

class CannotLinkPadException final : public std::exception
{
  public:
    const char* what() const noexcept
    {
        return "cannot link pad";
    }
};
