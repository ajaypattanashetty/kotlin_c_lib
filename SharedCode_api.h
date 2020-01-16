#ifndef KONAN_SHAREDCODE_H
#define KONAN_SHAREDCODE_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            SharedCode_KBoolean;
#else
typedef _Bool           SharedCode_KBoolean;
#endif
typedef unsigned short     SharedCode_KChar;
typedef signed char        SharedCode_KByte;
typedef short              SharedCode_KShort;
typedef int                SharedCode_KInt;
typedef long long          SharedCode_KLong;
typedef unsigned char      SharedCode_KUByte;
typedef unsigned short     SharedCode_KUShort;
typedef unsigned int       SharedCode_KUInt;
typedef unsigned long long SharedCode_KULong;
typedef float              SharedCode_KFloat;
typedef double             SharedCode_KDouble;
typedef void*              SharedCode_KNativePtr;
struct SharedCode_KType;
typedef struct SharedCode_KType SharedCode_KType;

typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Byte;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Short;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Int;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Long;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Float;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Double;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Char;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Boolean;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Unit;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_IdeaModelLogicDecorator;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_PriceKind;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_Parcelable;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_PriceKind_TARGET;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_PriceKind_CURRENT;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_PriceKind_PREVIOUS;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_collections_List;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlinx_serialization_SerializationConstructorMarker;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Any;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel_$serializer;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlinx_serialization_SerialDescriptor;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlin_Array;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlinx_serialization_Decoder;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlinx_serialization_Encoder;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel_Companion;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_kotlinx_serialization_KSerializer;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_Idea;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel_$serializer;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel_Companion;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel_$serializer;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel_Companion;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel_$serializer;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel_Companion;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel_$serializer;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel_Companion;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors;
typedef struct {
  SharedCode_KNativePtr pinned;
} SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(SharedCode_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  SharedCode_KBoolean (*IsInstance)(SharedCode_KNativePtr ref, const SharedCode_KType* type);
  SharedCode_kref_kotlin_Byte (*createNullableByte)(SharedCode_KByte);
  SharedCode_kref_kotlin_Short (*createNullableShort)(SharedCode_KShort);
  SharedCode_kref_kotlin_Int (*createNullableInt)(SharedCode_KInt);
  SharedCode_kref_kotlin_Long (*createNullableLong)(SharedCode_KLong);
  SharedCode_kref_kotlin_Float (*createNullableFloat)(SharedCode_KFloat);
  SharedCode_kref_kotlin_Double (*createNullableDouble)(SharedCode_KDouble);
  SharedCode_kref_kotlin_Char (*createNullableChar)(SharedCode_KChar);
  SharedCode_kref_kotlin_Boolean (*createNullableBoolean)(SharedCode_KBoolean);
  SharedCode_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            const char* (*createApplicationScreenMessage)();
            void (*inspect)();
            const char* (*platformName)();
            struct {
              SharedCode_KType* (*_type)(void);
              SharedCode_kref_com_kinsight_kinsightmultiplatform_IdeaModelLogicDecorator (*IdeaModelLogicDecorator)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel ideaModel);
              const char* (*getConviction)(SharedCode_kref_com_kinsight_kinsightmultiplatform_IdeaModelLogicDecorator thiz);
              const char* (*getDisplayValueForAlpha)(SharedCode_kref_com_kinsight_kinsightmultiplatform_IdeaModelLogicDecorator thiz);
              const char* (*getDisplayValueForPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_IdeaModelLogicDecorator thiz, SharedCode_kref_com_kinsight_kinsightmultiplatform_PriceKind priceKind);
            } IdeaModelLogicDecorator;
            struct {
              SharedCode_KType* (*_type)(void);
            } Parcelable;
            struct {
              SharedCode_KType* (*_type)(void);
              struct {
                SharedCode_kref_com_kinsight_kinsightmultiplatform_PriceKind (*get)(); /* enum entry for TARGET. */
              } TARGET;
              struct {
                SharedCode_kref_com_kinsight_kinsightmultiplatform_PriceKind (*get)(); /* enum entry for CURRENT. */
              } CURRENT;
              struct {
                SharedCode_kref_com_kinsight_kinsightmultiplatform_PriceKind (*get)(); /* enum entry for PREVIOUS. */
              } PREVIOUS;
            } PriceKind;
            struct {
            } extensions;
            struct {
              struct {
                SharedCode_KType* (*_type)(void);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel (*GraphModel)(SharedCode_KInt seen1, SharedCode_kref_kotlin_collections_List benchmark, SharedCode_kref_kotlin_collections_List ticker, SharedCode_KInt ideaAge, const char* intervalOption, SharedCode_kref_kotlinx_serialization_SerializationConstructorMarker serializationConstructorMarker);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel (*GraphModel_)(SharedCode_kref_kotlin_collections_List benchmark, SharedCode_kref_kotlin_collections_List ticker, SharedCode_KInt ideaAge, const char* intervalOption);
                SharedCode_kref_kotlin_collections_List (*get_benchmark)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                SharedCode_KInt (*get_ideaAge)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                const char* (*get_intervalOption)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                SharedCode_kref_kotlin_collections_List (*get_ticker)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                SharedCode_kref_kotlin_collections_List (*component1)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                SharedCode_kref_kotlin_collections_List (*component2)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                SharedCode_KInt (*component3)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                const char* (*component4)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel (*copy)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz, SharedCode_kref_kotlin_collections_List benchmark, SharedCode_kref_kotlin_collections_List ticker, SharedCode_KInt ideaAge, const char* intervalOption);
                SharedCode_KBoolean (*equals)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz, SharedCode_kref_kotlin_Any other);
                SharedCode_KInt (*hashCode)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                const char* (*toString)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel thiz);
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel_$serializer (*_instance)();
                  SharedCode_kref_kotlinx_serialization_SerialDescriptor (*get_descriptor)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel_$serializer thiz);
                  SharedCode_kref_kotlin_Array (*childSerializers)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel_$serializer thiz);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel (*deserialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Decoder decoder);
                  void (*serialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Encoder encoder, SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel obj);
                } $serializer;
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel_Companion (*_instance)();
                  SharedCode_kref_kotlinx_serialization_KSerializer (*serializer)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_GraphModel_Companion thiz);
                } Companion;
              } GraphModel;
              struct {
                SharedCode_KType* (*_type)(void);
                SharedCode_KDouble (*get_alpha)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_Idea thiz);
                SharedCode_KInt (*get_id)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_Idea thiz);
                const char* (*get_securityName)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_Idea thiz);
              } Idea;
              struct {
                SharedCode_KType* (*_type)(void);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel (*IdeaModel)(SharedCode_KInt seen1, SharedCode_KInt id, const char* securityName, const char* securityTicker, SharedCode_KDouble alpha, const char* benchMarkTicker, SharedCode_KDouble benchMarkCurrentPrice, SharedCode_KDouble benchMarkPerformance, SharedCode_KInt convictionId, SharedCode_KDouble currentPrice, const char* direction, SharedCode_KInt directionId, SharedCode_KDouble entryPrice, const char* reason, const char* stockCurrency, SharedCode_KInt stopLoss, SharedCode_KDouble stopLossValue, SharedCode_KDouble targetPrice, SharedCode_KDouble targetPricePercentage, const char* timeHorizon, const char* createdBy, const char* createdFrom, SharedCode_KDouble previousCurrentPrice, SharedCode_KBoolean isActive, SharedCode_kref_kotlinx_serialization_SerializationConstructorMarker serializationConstructorMarker);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel (*IdeaModel_)(SharedCode_KInt id, const char* securityName, const char* securityTicker, SharedCode_KDouble alpha, const char* benchMarkTicker, SharedCode_KDouble benchMarkCurrentPrice, SharedCode_KDouble benchMarkPerformance, SharedCode_KInt convictionId, SharedCode_KDouble currentPrice, const char* direction, SharedCode_KInt directionId, SharedCode_KDouble entryPrice, const char* reason, const char* stockCurrency, SharedCode_KInt stopLoss, SharedCode_KDouble stopLossValue, SharedCode_KDouble targetPrice, SharedCode_KDouble targetPricePercentage, const char* timeHorizon, const char* createdBy, const char* createdFrom, SharedCode_KDouble previousCurrentPrice, SharedCode_KBoolean isActive, SharedCode_KBoolean isPOAchieved, SharedCode_KBoolean isNewIdea);
                SharedCode_KDouble (*get_alpha)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_alpha)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KDouble set);
                SharedCode_KDouble (*get_benchMarkCurrentPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_benchMarkCurrentPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KDouble set);
                SharedCode_KDouble (*get_benchMarkPerformance)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_benchMarkPerformance)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KDouble set);
                const char* (*get_benchMarkTicker)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_benchMarkTicker)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, const char* set);
                SharedCode_KInt (*get_convictionId)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_convictionId)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KInt set);
                const char* (*get_createdBy)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_createdBy)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, const char* set);
                const char* (*get_createdFrom)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_createdFrom)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, const char* set);
                SharedCode_KDouble (*get_currentPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_currentPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KDouble set);
                const char* (*get_direction)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_direction)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, const char* set);
                SharedCode_KInt (*get_directionId)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_directionId)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KInt set);
                SharedCode_KDouble (*get_entryPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_entryPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KDouble set);
                SharedCode_KInt (*get_id)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KBoolean (*get_isActive)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_isActive)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KBoolean set);
                SharedCode_KBoolean (*get_isNewIdea)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_isNewIdea)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KBoolean set);
                SharedCode_KBoolean (*get_isPOAchieved)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_isPOAchieved)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KBoolean set);
                SharedCode_KDouble (*get_previousCurrentPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_previousCurrentPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KDouble set);
                const char* (*get_reason)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_reason)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, const char* set);
                const char* (*get_securityName)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*get_securityTicker)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*get_stockCurrency)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_stockCurrency)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, const char* set);
                SharedCode_KInt (*get_stopLoss)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_stopLoss)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KInt set);
                SharedCode_KDouble (*get_stopLossValue)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_stopLossValue)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KDouble set);
                SharedCode_KDouble (*get_targetPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_targetPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KDouble set);
                SharedCode_KDouble (*get_targetPricePercentage)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_targetPricePercentage)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KDouble set);
                const char* (*get_timeHorizon)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                void (*set_timeHorizon)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, const char* set);
                SharedCode_KInt (*component1)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*component10)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KInt (*component11)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KDouble (*component12)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*component13)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*component14)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KInt (*component15)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KDouble (*component16)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KDouble (*component17)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KDouble (*component18)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*component19)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*component2)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*component20)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*component21)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KDouble (*component22)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KBoolean (*component23)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KBoolean (*component24)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KBoolean (*component25)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*component3)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KDouble (*component4)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*component5)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KDouble (*component6)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KDouble (*component7)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KInt (*component8)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_KDouble (*component9)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel (*copy)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_KInt id, const char* securityName, const char* securityTicker, SharedCode_KDouble alpha, const char* benchMarkTicker, SharedCode_KDouble benchMarkCurrentPrice, SharedCode_KDouble benchMarkPerformance, SharedCode_KInt convictionId, SharedCode_KDouble currentPrice, const char* direction, SharedCode_KInt directionId, SharedCode_KDouble entryPrice, const char* reason, const char* stockCurrency, SharedCode_KInt stopLoss, SharedCode_KDouble stopLossValue, SharedCode_KDouble targetPrice, SharedCode_KDouble targetPricePercentage, const char* timeHorizon, const char* createdBy, const char* createdFrom, SharedCode_KDouble previousCurrentPrice, SharedCode_KBoolean isActive, SharedCode_KBoolean isPOAchieved, SharedCode_KBoolean isNewIdea);
                SharedCode_KBoolean (*equals)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz, SharedCode_kref_kotlin_Any other);
                SharedCode_KInt (*hashCode)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                const char* (*toString)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel thiz);
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel_$serializer (*_instance)();
                  SharedCode_kref_kotlinx_serialization_SerialDescriptor (*get_descriptor)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel_$serializer thiz);
                  SharedCode_kref_kotlin_Array (*childSerializers)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel_$serializer thiz);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel (*deserialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Decoder decoder);
                  void (*serialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Encoder encoder, SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel obj);
                } $serializer;
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel_Companion (*_instance)();
                  SharedCode_kref_kotlinx_serialization_KSerializer (*serializer)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_IdeaModel_Companion thiz);
                } Companion;
              } IdeaModel;
              struct {
                SharedCode_KType* (*_type)(void);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage (*NotificationMessage)(const char* messageHeader, const char* message, const char* by, const char* from, SharedCode_KInt ideaId);
                const char* (*get_by)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                const char* (*get_from)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                SharedCode_KInt (*get_ideaId)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                const char* (*get_message)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                const char* (*get_messageHeader)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                const char* (*component1)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                const char* (*component2)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                const char* (*component3)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                const char* (*component4)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                SharedCode_KInt (*component5)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage (*copy)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz, const char* messageHeader, const char* message, const char* by, const char* from, SharedCode_KInt ideaId);
                SharedCode_KBoolean (*equals)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz, SharedCode_kref_kotlin_Any other);
                SharedCode_KInt (*hashCode)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
                const char* (*toString)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_NotificationMessage thiz);
              } NotificationMessage;
              struct {
                SharedCode_KType* (*_type)(void);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel (*TickModel)(SharedCode_KInt seen1, const char* sourceDate, SharedCode_KDouble x, SharedCode_KDouble y, SharedCode_kref_kotlinx_serialization_SerializationConstructorMarker serializationConstructorMarker);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel (*TickModel_)(const char* sourceDate, SharedCode_KDouble x, SharedCode_KDouble y);
                const char* (*get_sourceDate)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz);
                SharedCode_KDouble (*get_x)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz);
                SharedCode_KDouble (*get_y)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz);
                const char* (*component1)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz);
                SharedCode_KDouble (*component2)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz);
                SharedCode_KDouble (*component3)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel (*copy)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz, const char* sourceDate, SharedCode_KDouble x, SharedCode_KDouble y);
                SharedCode_KBoolean (*equals)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz, SharedCode_kref_kotlin_Any other);
                SharedCode_KInt (*hashCode)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz);
                const char* (*toString)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel thiz);
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel_$serializer (*_instance)();
                  SharedCode_kref_kotlinx_serialization_SerialDescriptor (*get_descriptor)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel_$serializer thiz);
                  SharedCode_kref_kotlin_Array (*childSerializers)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel_$serializer thiz);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel (*deserialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Decoder decoder);
                  void (*serialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Encoder encoder, SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel obj);
                } $serializer;
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel_Companion (*_instance)();
                  SharedCode_kref_kotlinx_serialization_KSerializer (*serializer)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickModel_Companion thiz);
                } Companion;
              } TickModel;
              struct {
                SharedCode_KType* (*_type)(void);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel (*TickerModel)(SharedCode_KInt seen1, const char* symbol, const char* exchange, const char* name, const char* type, const char* region, const char* currency, SharedCode_KBoolean isEnabled, SharedCode_kref_kotlinx_serialization_SerializationConstructorMarker serializationConstructorMarker);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel (*TickerModel_)(const char* symbol, const char* exchange, const char* name, const char* type, const char* region, const char* currency, SharedCode_KBoolean isEnabled);
                const char* (*get_currency)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*get_exchange)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                SharedCode_KBoolean (*get_isEnabled)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*get_name)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*get_region)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*get_symbol)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*get_type)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*component1)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*component2)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*component3)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*component4)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*component5)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*component6)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                SharedCode_KBoolean (*component7)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel (*copy)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz, const char* symbol, const char* exchange, const char* name, const char* type, const char* region, const char* currency, SharedCode_KBoolean isEnabled);
                SharedCode_KBoolean (*equals)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz, SharedCode_kref_kotlin_Any other);
                SharedCode_KInt (*hashCode)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                const char* (*toString)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel thiz);
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel_$serializer (*_instance)();
                  SharedCode_kref_kotlinx_serialization_SerialDescriptor (*get_descriptor)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel_$serializer thiz);
                  SharedCode_kref_kotlin_Array (*childSerializers)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel_$serializer thiz);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel (*deserialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Decoder decoder);
                  void (*serialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Encoder encoder, SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel obj);
                } $serializer;
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel_Companion (*_instance)();
                  SharedCode_kref_kotlinx_serialization_KSerializer (*serializer)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerModel_Companion thiz);
                } Companion;
              } TickerModel;
              struct {
                SharedCode_KType* (*_type)(void);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel (*TickerPriceModel)(SharedCode_KInt seen1, const char* symbol, const char* companyName, SharedCode_KDouble latestPrice, SharedCode_KLong lastTradeTime, SharedCode_kref_kotlinx_serialization_SerializationConstructorMarker serializationConstructorMarker);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel (*TickerPriceModel_)(const char* symbol, const char* companyName, SharedCode_KDouble latestPrice, SharedCode_KLong lastTradeTime);
                const char* (*get_companyName)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                SharedCode_KLong (*get_lastTradeTime)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                SharedCode_KDouble (*get_latestPrice)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                const char* (*get_symbol)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                const char* (*component1)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                const char* (*component2)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                SharedCode_KDouble (*component3)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                SharedCode_KLong (*component4)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel (*copy)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz, const char* symbol, const char* companyName, SharedCode_KDouble latestPrice, SharedCode_KLong lastTradeTime);
                SharedCode_KBoolean (*equals)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz, SharedCode_kref_kotlin_Any other);
                SharedCode_KInt (*hashCode)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                const char* (*toString)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel thiz);
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel_$serializer (*_instance)();
                  SharedCode_kref_kotlinx_serialization_SerialDescriptor (*get_descriptor)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel_$serializer thiz);
                  SharedCode_kref_kotlin_Array (*childSerializers)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel_$serializer thiz);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel (*deserialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Decoder decoder);
                  void (*serialize)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel_$serializer thiz, SharedCode_kref_kotlinx_serialization_Encoder encoder, SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel obj);
                } $serializer;
                struct {
                  SharedCode_KType* (*_type)(void);
                  SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel_Companion (*_instance)();
                  SharedCode_kref_kotlinx_serialization_KSerializer (*serializer)(SharedCode_kref_com_kinsight_kinsightmultiplatform_models_TickerPriceModel_Companion thiz);
                } Companion;
              } TickerPriceModel;
            } models;
            struct {
              struct {
                SharedCode_KType* (*_type)(void);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors (*_instance)();
                const char* (*get_backgrounddarkest)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_black_overlay)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_circleFill)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorAccent)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorGradientCenter)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorGradientEnd)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorGradientStart)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorGreen)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorPrimary)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorPrimaryDark)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorRed)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorRegText)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorTransparent)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorViewBackground)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorWhite)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorbackground)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorbackgroundDark)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorbackgroundDarker)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_colorlabelText)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_missingData)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_primaryblue)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_radio_button_selected_color)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_radio_button_unselected_color)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_separator_color)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
                const char* (*get_yellow)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Colors thiz);
              } Colors;
              struct {
                SharedCode_KType* (*_type)(void);
                SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings (*_instance)();
                const char* (*get_PORT)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_SERVER_URL_LOCAL_BASE_FOR_EMULATOR)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_SERVER_URL_REMOTE_BASE)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_action_settings)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_alpha)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_app_name)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_conviction_high)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_conviction_low)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_conviction_medium)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_direction_long)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_direction_short)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_dummy_button)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_dummy_content)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_hello_blank_fragment)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_menu_gallery)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_menu_home)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_menu_send)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_menu_share)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_menu_slideshow)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_menu_tools)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_nav_header_desc)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_nav_header_subtitle)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_nav_header_title)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_navigation_drawer_close)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_navigation_drawer_open)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_psi)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_time_horizon_one_month)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_time_horizon_one_week)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_time_horizon_three_months)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_title_activity_create_new_idea)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_title_activity_idea_detail)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
                const char* (*get_welcomeMessage)(SharedCode_kref_com_kinsight_kinsightmultiplatform_resources_Strings thiz);
              } Strings;
            } resources;
          } kinsightmultiplatform;
        } kinsight;
      } com;
    } root;
  } kotlin;
} SharedCode_ExportedSymbols;
extern SharedCode_ExportedSymbols* SharedCode_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_SHAREDCODE_H */
