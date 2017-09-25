// This file is generated by alp_json_to_cpp from ${json_file_name}

#ifdef TIV_TEST_NETWORK

#include <blockchain/GenesisJson.hpp>
#include <blockchain/GenesisState.hpp>

#include <string>
#include <fc/crypto/sha256.hpp>
#include <fc/io/raw.hpp>

namespace TiValue {
	namespace blockchain {
		static const unsigned char raw_genesis_config0[] =
		{
			0x24, 0x6a, 0x78, 0x59, 0x00, 0x09, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x30, 0x03,
			0xe4, 0x05, 0x20, 0xba, 0x6d, 0x20, 0x99, 0x47, 0xd7, 0x9b, 0x73, 0x77, 0x83,
			0x47, 0x99, 0x6e, 0x5b, 0x43, 0x50, 0x2c, 0x66, 0x46, 0x9a, 0xf4, 0x25, 0x5c,
			0xfe, 0x19, 0x1b, 0x92, 0xf5, 0xb1, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x31, 0x02,
			0x54, 0x47, 0x62, 0x8f, 0x18, 0xf6, 0x9b, 0x34, 0x75, 0x78, 0x38, 0x6c, 0xb9,
			0xfc, 0x1d, 0x01, 0xf9, 0x91, 0x1d, 0x0f, 0x56, 0x69, 0x10, 0x5b, 0xf8, 0x08,
			0x81, 0x83, 0x91, 0xf3, 0x39, 0xad, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x32, 0x03,
			0x77, 0xf3, 0xdc, 0xd0, 0x98, 0x7b, 0xcc, 0x5a, 0xff, 0x64, 0x18, 0x43, 0x46,
			0xd5, 0xa6, 0x28, 0x14, 0xf3, 0x54, 0x59, 0xdd, 0xc7, 0x5c, 0xf1, 0x41, 0xe5,
			0xa0, 0x5b, 0x57, 0xf6, 0xdd, 0x31, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x33, 0x02,
			0x85, 0x07, 0x59, 0x11, 0x85, 0x26, 0x5c, 0xb6, 0xab, 0x41, 0xb4, 0x70, 0x37,
			0xb6, 0x8a, 0x42, 0x53, 0xb5, 0x90, 0xf0, 0x71, 0x14, 0xc6, 0x12, 0x55, 0x73,
			0x88, 0xea, 0x03, 0x7c, 0x59, 0x21, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x34, 0x03,
			0xec, 0xec, 0x6a, 0xd5, 0x07, 0x52, 0x40, 0xf8, 0x7f, 0x77, 0x45, 0xf5, 0x65,
			0x1f, 0x2c, 0x33, 0xbb, 0x3d, 0xda, 0x73, 0x52, 0x42, 0xd2, 0xac, 0x2b, 0xde,
			0x91, 0x31, 0x9e, 0xc3, 0x0b, 0xa1, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x35, 0x02,
			0x6f, 0x02, 0xb1, 0xc4, 0xd8, 0x79, 0x1c, 0xd3, 0x0a, 0x89, 0x42, 0x02, 0xeb,
			0xdc, 0x8f, 0x34, 0x49, 0x35, 0x20, 0x04, 0xcf, 0x01, 0xa9, 0x3d, 0x21, 0x76,
			0x1d, 0xf1, 0x57, 0x8a, 0xde, 0x4e, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x36, 0x02,
			0x29, 0x09, 0xf0, 0xec, 0x91, 0x14, 0xab, 0x37, 0xf1, 0xa2, 0x5d, 0xac, 0x4c,
			0xd5, 0xc2, 0x9a, 0xef, 0x41, 0x05, 0x2a, 0x20, 0x9a, 0xd3, 0x1a, 0x55, 0xdf,
			0x49, 0x42, 0xa4, 0xc1, 0x8b, 0x70, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x37, 0x02,
			0xb4, 0xd3, 0xe7, 0xe0, 0x79, 0xaf, 0x85, 0xda, 0x55, 0x9a, 0xaf, 0x47, 0x67,
			0xb6, 0x7b, 0xe7, 0x9d, 0xd1, 0x39, 0xed, 0x53, 0xa5, 0xc8, 0xc7, 0x17, 0x66,
			0xf7, 0x84, 0x66, 0x2a, 0x41, 0x2d, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x38, 0x03,
			0x35, 0x3b, 0xdc, 0x1f, 0xc6, 0xea, 0x8b, 0x49, 0x12, 0x8d, 0xe2, 0xd2, 0x83,
			0x1a, 0xbf, 0xba, 0x42, 0x97, 0xd1, 0x2a, 0xa8, 0x67, 0x79, 0x89, 0xc4, 0x05,
			0x8b, 0x7a, 0x2f, 0xb3, 0xc1, 0xc0, 0x01, 0x24, 0x54, 0x49, 0x43, 0x39, 0x41,
			0x66, 0x74, 0x41, 0x6f, 0x67, 0x36, 0x4c, 0x65, 0x78, 0x58, 0x58, 0x5a, 0x76,
			0x44, 0x4e, 0x4b, 0x38, 0x6f, 0x31, 0x62, 0x4a, 0x79, 0x75, 0x74, 0x68, 0x68,
			0x61, 0x59, 0x70, 0x41, 0x35, 0x00, 0x50, 0x8a, 0x71, 0x19, 0x13, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};

		GenesisState get_builtin_genesis_block_config()
		{
			unsigned total_size = sizeof(raw_genesis_config0);
			std::unique_ptr<char[]> buffer(new char[total_size]);
			char *ptr = buffer.get();
			memcpy(ptr, (const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
			ptr += sizeof(raw_genesis_config0);
			return fc::raw::unpack<GenesisState>(buffer.get(), total_size);
		}

		fc::sha256 get_builtin_genesis_block_state_hash()
		{
			fc::sha256::encoder encoder;
			encoder.write((const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
			return encoder.result();
		}

	} // end namespace TiValue::blockchain
}
#endif