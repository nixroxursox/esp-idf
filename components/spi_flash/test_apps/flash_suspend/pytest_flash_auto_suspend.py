# SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
# SPDX-License-Identifier: Apache-2.0
import pytest
from pytest_embedded import Dut


@pytest.mark.esp32c3
@pytest.mark.flash_suspend
@pytest.mark.parametrize(
    'config',
    [
        'release',
        'i2c_isr_flash',
        'text_in_flash_when_suspend',
    ],
    indirect=True,
)
def test_flash_auto_suspend(dut: Dut) -> None:
    dut.run_all_single_board_cases(timeout=30)
