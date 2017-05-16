#pragma once
#include "TLBinaryReader.h"
#include "TLBinaryWriter.h"
#include "Telegram.Api.Native.h"

using ABI::Telegram::Api::Native::TL::ITLObject;
using ABI::Telegram::Api::Native::TL::ITLBinaryReader;
using ABI::Telegram::Api::Native::TL::ITLObjectSerializerStatics;

namespace Telegram
{
	namespace Api
	{
		namespace Native
		{
			namespace TL
			{

				class TLObjectSerializerStatics WrlSealed : public AgileActivationFactory<ITLObjectSerializerStatics>
				{
					InspectableClassStatic(RuntimeClass_Telegram_Api_Native_TL_TLObjectSerializer, BaseTrust);

				public:
					IFACEMETHODIMP Serialize(_In_ ITLObject* object, _Out_ UINT32* __valueSize, _Out_writes_(*__valueSize) BYTE** value);
					IFACEMETHODIMP Deserialize(UINT32 __bufferSize, _In_ BYTE* buffer, _Out_ ITLBinaryReader** value);
					IFACEMETHODIMP GetObjectSize(_In_ ITLObject* object, _Out_ UINT32* value);
				};

			}
		}
	}
}