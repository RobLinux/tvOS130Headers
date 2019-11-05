/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/INJSONSerializable.h>
#import <Intents/_INPBIntentMetadata.h>
@class NSString, _INPBImageValue, NSArray, _INPBString;


@protocol _INPBIntentMetadata <NSObject>
@property (nonatomic,copy) NSString * categoryVerb; 
@property (nonatomic,readonly) BOOL hasCategoryVerb; 
@property (nonatomic,retain) _INPBImageValue * defaultImageValue; 
@property (nonatomic,readonly) BOOL hasDefaultImageValue; 
@property (assign,nonatomic) int executionContext; 
@property (assign,nonatomic) BOOL hasExecutionContext; 
@property (assign,nonatomic) int intentCategory; 
@property (assign,nonatomic) BOOL hasIntentCategory; 
@property (nonatomic,copy) NSString * launchId; 
@property (nonatomic,readonly) BOOL hasLaunchId; 
@property (nonatomic,copy) NSString * nanoLaunchId; 
@property (nonatomic,readonly) BOOL hasNanoLaunchId; 
@property (nonatomic,readonly) int* requiredEntitlements; 
@property (nonatomic,readonly) unsigned long long requiredEntitlementsCount; 
@property (nonatomic,copy) NSString * systemExtensionBundleId; 
@property (nonatomic,readonly) BOOL hasSystemExtensionBundleId; 
@property (nonatomic,copy) NSString * systemUIExtensionBundleId; 
@property (nonatomic,readonly) BOOL hasSystemUIExtensionBundleId; 
@property (assign,nonatomic) BOOL backgroundLaunch; 
@property (assign,nonatomic) BOOL hasBackgroundLaunch; 
@property (assign,nonatomic) BOOL confirmed; 
@property (assign,nonatomic) BOOL hasConfirmed; 
@property (nonatomic,copy) NSArray * forceNeedsValueForParameters; 
@property (nonatomic,readonly) unsigned long long forceNeedsValueForParametersCount; 
@property (assign,nonatomic) int idiom; 
@property (assign,nonatomic) BOOL hasIdiom; 
@property (nonatomic,copy) NSString * intentDescription; 
@property (nonatomic,readonly) BOOL hasIntentDescription; 
@property (nonatomic,copy) NSString * intentId; 
@property (nonatomic,readonly) BOOL hasIntentId; 
@property (assign,nonatomic) BOOL isOwnedByCurrentUser; 
@property (assign,nonatomic) BOOL hasIsOwnedByCurrentUser; 
@property (assign,nonatomic) BOOL isPrimaryDisplayDisabled; 
@property (assign,nonatomic) BOOL hasIsPrimaryDisplayDisabled; 
@property (nonatomic,copy) NSString * originatingDeviceIdsIdentifier; 
@property (nonatomic,readonly) BOOL hasOriginatingDeviceIdsIdentifier; 
@property (nonatomic,copy) NSString * originatingDeviceRapportEffectiveId; 
@property (nonatomic,readonly) BOOL hasOriginatingDeviceRapportEffectiveId; 
@property (nonatomic,copy) NSString * originatingDeviceRapportMediaSystemId; 
@property (nonatomic,readonly) BOOL hasOriginatingDeviceRapportMediaSystemId; 
@property (nonatomic,copy) NSArray * parameterImages; 
@property (nonatomic,readonly) unsigned long long parameterImagesCount; 
@property (nonatomic,copy) NSString * suggestedInvocationPhrase; 
@property (nonatomic,readonly) BOOL hasSuggestedInvocationPhrase; 
@property (assign,nonatomic) int triggerMethod; 
@property (assign,nonatomic) BOOL hasTriggerMethod; 
@property (assign,nonatomic) BOOL userConfirmationRequired; 
@property (assign,nonatomic) BOOL hasUserConfirmationRequired; 
@property (nonatomic,retain) _INPBString * userUtterance; 
@property (nonatomic,readonly) BOOL hasUserUtterance; 
@required
+(Class)parameterImagesType;
-(int*)requiredEntitlements;
-(void)addRequiredEntitlement:(int)arg1;
-(NSString *)suggestedInvocationPhrase;
-(void)setSuggestedInvocationPhrase:(id)arg1;
-(int)idiom;
-(void)setIdiom:(int)arg1;
-(int)intentCategory;
-(void)setIntentCategory:(int)arg1;
-(id)executionContextAsString:(int)arg1;
-(int)StringAsExecutionContext:(id)arg1;
-(id)intentCategoryAsString:(int)arg1;
-(int)StringAsIntentCategory:(id)arg1;
-(void)clearRequiredEntitlements;
-(int)requiredEntitlementAtIndex:(unsigned long long)arg1;
-(void)setRequiredEntitlements:(int*)arg1 count:(unsigned long long)arg2;
-(id)requiredEntitlementsAsString:(int)arg1;
-(int)StringAsRequiredEntitlements:(id)arg1;
-(void)clearForceNeedsValueForParameters;
-(void)addForceNeedsValueForParameter:(id)arg1;
-(id)forceNeedsValueForParameterAtIndex:(unsigned long long)arg1;
-(id)idiomAsString:(int)arg1;
-(int)StringAsIdiom:(id)arg1;
-(void)clearParameterImages;
-(void)addParameterImages:(id)arg1;
-(id)parameterImagesAtIndex:(unsigned long long)arg1;
-(id)triggerMethodAsString:(int)arg1;
-(int)StringAsTriggerMethod:(id)arg1;
-(NSString *)categoryVerb;
-(void)setCategoryVerb:(id)arg1;
-(BOOL)hasCategoryVerb;
-(_INPBImageValue *)defaultImageValue;
-(void)setDefaultImageValue:(id)arg1;
-(BOOL)hasDefaultImageValue;
-(int)executionContext;
-(void)setExecutionContext:(int)arg1;
-(BOOL)hasExecutionContext;
-(void)setHasExecutionContext:(BOOL)arg1;
-(BOOL)hasIntentCategory;
-(void)setHasIntentCategory:(BOOL)arg1;
-(NSString *)launchId;
-(void)setLaunchId:(id)arg1;
-(BOOL)hasLaunchId;
-(NSString *)nanoLaunchId;
-(void)setNanoLaunchId:(id)arg1;
-(BOOL)hasNanoLaunchId;
-(unsigned long long)requiredEntitlementsCount;
-(NSString *)systemExtensionBundleId;
-(void)setSystemExtensionBundleId:(id)arg1;
-(BOOL)hasSystemExtensionBundleId;
-(NSString *)systemUIExtensionBundleId;
-(void)setSystemUIExtensionBundleId:(id)arg1;
-(BOOL)hasSystemUIExtensionBundleId;
-(BOOL)backgroundLaunch;
-(void)setBackgroundLaunch:(BOOL)arg1;
-(BOOL)hasBackgroundLaunch;
-(void)setHasBackgroundLaunch:(BOOL)arg1;
-(BOOL)confirmed;
-(void)setConfirmed:(BOOL)arg1;
-(BOOL)hasConfirmed;
-(void)setHasConfirmed:(BOOL)arg1;
-(NSArray *)forceNeedsValueForParameters;
-(void)setForceNeedsValueForParameters:(id)arg1;
-(unsigned long long)forceNeedsValueForParametersCount;
-(BOOL)hasIdiom;
-(void)setHasIdiom:(BOOL)arg1;
-(NSString *)intentDescription;
-(void)setIntentDescription:(id)arg1;
-(BOOL)hasIntentDescription;
-(NSString *)intentId;
-(void)setIntentId:(id)arg1;
-(BOOL)hasIntentId;
-(BOOL)isOwnedByCurrentUser;
-(void)setIsOwnedByCurrentUser:(BOOL)arg1;
-(BOOL)hasIsOwnedByCurrentUser;
-(void)setHasIsOwnedByCurrentUser:(BOOL)arg1;
-(BOOL)isPrimaryDisplayDisabled;
-(void)setIsPrimaryDisplayDisabled:(BOOL)arg1;
-(BOOL)hasIsPrimaryDisplayDisabled;
-(void)setHasIsPrimaryDisplayDisabled:(BOOL)arg1;
-(NSString *)originatingDeviceIdsIdentifier;
-(void)setOriginatingDeviceIdsIdentifier:(id)arg1;
-(BOOL)hasOriginatingDeviceIdsIdentifier;
-(NSString *)originatingDeviceRapportEffectiveId;
-(void)setOriginatingDeviceRapportEffectiveId:(id)arg1;
-(BOOL)hasOriginatingDeviceRapportEffectiveId;
-(NSString *)originatingDeviceRapportMediaSystemId;
-(void)setOriginatingDeviceRapportMediaSystemId:(id)arg1;
-(BOOL)hasOriginatingDeviceRapportMediaSystemId;
-(NSArray *)parameterImages;
-(void)setParameterImages:(id)arg1;
-(unsigned long long)parameterImagesCount;
-(BOOL)hasSuggestedInvocationPhrase;
-(int)triggerMethod;
-(void)setTriggerMethod:(int)arg1;
-(BOOL)hasTriggerMethod;
-(void)setHasTriggerMethod:(BOOL)arg1;
-(BOOL)userConfirmationRequired;
-(void)setUserConfirmationRequired:(BOOL)arg1;
-(BOOL)hasUserConfirmationRequired;
-(void)setHasUserConfirmationRequired:(BOOL)arg1;
-(_INPBString *)userUtterance;
-(void)setUserUtterance:(id)arg1;
-(BOOL)hasUserUtterance;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString, _INPBImageValue, NSArray, _INPBString;

@interface _INPBIntentMetadata : PBCodable <INJSONSerializable, _INPBIntentMetadata, NSSecureCoding, NSCopying> {

	SCD_Struct_IN5* _requiredEntitlements;
	SCD_Struct_IN6 _has;
	BOOL _backgroundLaunch;
	BOOL _confirmed;
	BOOL _isOwnedByCurrentUser;
	BOOL _isPrimaryDisplayDisabled;
	BOOL _userConfirmationRequired;
	BOOL __encodeLegacyGloryData;
	int _executionContext;
	int _intentCategory;
	int _idiom;
	int _triggerMethod;
	NSString* _categoryVerb;
	_INPBImageValue* _defaultImageValue;
	NSString* _launchId;
	NSString* _nanoLaunchId;
	NSString* _systemExtensionBundleId;
	NSString* _systemUIExtensionBundleId;
	NSArray* _forceNeedsValueForParameters;
	NSString* _intentDescription;
	NSString* _intentId;
	NSString* _originatingDeviceIdsIdentifier;
	NSString* _originatingDeviceRapportEffectiveId;
	NSString* _originatingDeviceRapportMediaSystemId;
	NSArray* _parameterImages;
	NSString* _suggestedInvocationPhrase;
	_INPBString* _userUtterance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (nonatomic,copy) NSString * categoryVerb;                                                      //@synthesize categoryVerb=_categoryVerb - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoryVerb; 
@property (nonatomic,retain) _INPBImageValue * defaultImageValue;                                        //@synthesize defaultImageValue=_defaultImageValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultImageValue; 
@property (assign,nonatomic) int executionContext;                                                       //@synthesize executionContext=_executionContext - In the implementation block
@property (assign,nonatomic) BOOL hasExecutionContext; 
@property (assign,nonatomic) int intentCategory;                                                         //@synthesize intentCategory=_intentCategory - In the implementation block
@property (assign,nonatomic) BOOL hasIntentCategory; 
@property (nonatomic,copy) NSString * launchId;                                                          //@synthesize launchId=_launchId - In the implementation block
@property (nonatomic,readonly) BOOL hasLaunchId; 
@property (nonatomic,copy) NSString * nanoLaunchId;                                                      //@synthesize nanoLaunchId=_nanoLaunchId - In the implementation block
@property (nonatomic,readonly) BOOL hasNanoLaunchId; 
@property (nonatomic,readonly) int* requiredEntitlements; 
@property (nonatomic,readonly) unsigned long long requiredEntitlementsCount; 
@property (nonatomic,copy) NSString * systemExtensionBundleId;                                           //@synthesize systemExtensionBundleId=_systemExtensionBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemExtensionBundleId; 
@property (nonatomic,copy) NSString * systemUIExtensionBundleId;                                         //@synthesize systemUIExtensionBundleId=_systemUIExtensionBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemUIExtensionBundleId; 
@property (assign,nonatomic) BOOL backgroundLaunch;                                                      //@synthesize backgroundLaunch=_backgroundLaunch - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundLaunch; 
@property (assign,nonatomic) BOOL confirmed;                                                             //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,nonatomic) BOOL hasConfirmed; 
@property (nonatomic,copy) NSArray * forceNeedsValueForParameters;                                       //@synthesize forceNeedsValueForParameters=_forceNeedsValueForParameters - In the implementation block
@property (nonatomic,readonly) unsigned long long forceNeedsValueForParametersCount; 
@property (assign,nonatomic) int idiom;                                                                  //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) BOOL hasIdiom; 
@property (nonatomic,copy) NSString * intentDescription;                                                 //@synthesize intentDescription=_intentDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentDescription; 
@property (nonatomic,copy) NSString * intentId;                                                          //@synthesize intentId=_intentId - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentId; 
@property (assign,nonatomic) BOOL isOwnedByCurrentUser;                                                  //@synthesize isOwnedByCurrentUser=_isOwnedByCurrentUser - In the implementation block
@property (assign,nonatomic) BOOL hasIsOwnedByCurrentUser; 
@property (assign,nonatomic) BOOL isPrimaryDisplayDisabled;                                              //@synthesize isPrimaryDisplayDisabled=_isPrimaryDisplayDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsPrimaryDisplayDisabled; 
@property (nonatomic,copy) NSString * originatingDeviceIdsIdentifier;                                    //@synthesize originatingDeviceIdsIdentifier=_originatingDeviceIdsIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingDeviceIdsIdentifier; 
@property (nonatomic,copy) NSString * originatingDeviceRapportEffectiveId;                               //@synthesize originatingDeviceRapportEffectiveId=_originatingDeviceRapportEffectiveId - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingDeviceRapportEffectiveId; 
@property (nonatomic,copy) NSString * originatingDeviceRapportMediaSystemId;                             //@synthesize originatingDeviceRapportMediaSystemId=_originatingDeviceRapportMediaSystemId - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingDeviceRapportMediaSystemId; 
@property (nonatomic,copy) NSArray * parameterImages;                                                    //@synthesize parameterImages=_parameterImages - In the implementation block
@property (nonatomic,readonly) unsigned long long parameterImagesCount; 
@property (nonatomic,copy) NSString * suggestedInvocationPhrase;                                         //@synthesize suggestedInvocationPhrase=_suggestedInvocationPhrase - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedInvocationPhrase; 
@property (assign,nonatomic) int triggerMethod;                                                          //@synthesize triggerMethod=_triggerMethod - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerMethod; 
@property (assign,nonatomic) BOOL userConfirmationRequired;                                              //@synthesize userConfirmationRequired=_userConfirmationRequired - In the implementation block
@property (assign,nonatomic) BOOL hasUserConfirmationRequired; 
@property (nonatomic,retain) _INPBString * userUtterance;                                                //@synthesize userUtterance=_userUtterance - In the implementation block
@property (nonatomic,readonly) BOOL hasUserUtterance; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(Class)parameterImagesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int*)requiredEntitlements;
-(void)addRequiredEntitlement:(int)arg1 ;
-(NSString *)suggestedInvocationPhrase;
-(void)setSuggestedInvocationPhrase:(NSString *)arg1 ;
-(int)idiom;
-(void)setIdiom:(int)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(int)intentCategory;
-(void)setIntentCategory:(int)arg1 ;
-(id)executionContextAsString:(int)arg1 ;
-(int)StringAsExecutionContext:(id)arg1 ;
-(id)intentCategoryAsString:(int)arg1 ;
-(int)StringAsIntentCategory:(id)arg1 ;
-(void)clearRequiredEntitlements;
-(int)requiredEntitlementAtIndex:(unsigned long long)arg1 ;
-(void)setRequiredEntitlements:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)requiredEntitlementsAsString:(int)arg1 ;
-(int)StringAsRequiredEntitlements:(id)arg1 ;
-(void)clearForceNeedsValueForParameters;
-(void)addForceNeedsValueForParameter:(id)arg1 ;
-(id)forceNeedsValueForParameterAtIndex:(unsigned long long)arg1 ;
-(id)idiomAsString:(int)arg1 ;
-(int)StringAsIdiom:(id)arg1 ;
-(void)clearParameterImages;
-(void)addParameterImages:(id)arg1 ;
-(id)parameterImagesAtIndex:(unsigned long long)arg1 ;
-(id)triggerMethodAsString:(int)arg1 ;
-(int)StringAsTriggerMethod:(id)arg1 ;
-(NSString *)categoryVerb;
-(void)setCategoryVerb:(NSString *)arg1 ;
-(BOOL)hasCategoryVerb;
-(_INPBImageValue *)defaultImageValue;
-(void)setDefaultImageValue:(_INPBImageValue *)arg1 ;
-(BOOL)hasDefaultImageValue;
-(int)executionContext;
-(void)setExecutionContext:(int)arg1 ;
-(BOOL)hasExecutionContext;
-(void)setHasExecutionContext:(BOOL)arg1 ;
-(BOOL)hasIntentCategory;
-(void)setHasIntentCategory:(BOOL)arg1 ;
-(NSString *)launchId;
-(void)setLaunchId:(NSString *)arg1 ;
-(BOOL)hasLaunchId;
-(NSString *)nanoLaunchId;
-(void)setNanoLaunchId:(NSString *)arg1 ;
-(BOOL)hasNanoLaunchId;
-(unsigned long long)requiredEntitlementsCount;
-(NSString *)systemExtensionBundleId;
-(void)setSystemExtensionBundleId:(NSString *)arg1 ;
-(BOOL)hasSystemExtensionBundleId;
-(NSString *)systemUIExtensionBundleId;
-(void)setSystemUIExtensionBundleId:(NSString *)arg1 ;
-(BOOL)hasSystemUIExtensionBundleId;
-(BOOL)backgroundLaunch;
-(void)setBackgroundLaunch:(BOOL)arg1 ;
-(BOOL)hasBackgroundLaunch;
-(void)setHasBackgroundLaunch:(BOOL)arg1 ;
-(BOOL)confirmed;
-(void)setConfirmed:(BOOL)arg1 ;
-(BOOL)hasConfirmed;
-(void)setHasConfirmed:(BOOL)arg1 ;
-(NSArray *)forceNeedsValueForParameters;
-(void)setForceNeedsValueForParameters:(NSArray *)arg1 ;
-(unsigned long long)forceNeedsValueForParametersCount;
-(BOOL)hasIdiom;
-(void)setHasIdiom:(BOOL)arg1 ;
-(NSString *)intentDescription;
-(void)setIntentDescription:(NSString *)arg1 ;
-(BOOL)hasIntentDescription;
-(NSString *)intentId;
-(void)setIntentId:(NSString *)arg1 ;
-(BOOL)hasIntentId;
-(BOOL)isOwnedByCurrentUser;
-(void)setIsOwnedByCurrentUser:(BOOL)arg1 ;
-(BOOL)hasIsOwnedByCurrentUser;
-(void)setHasIsOwnedByCurrentUser:(BOOL)arg1 ;
-(BOOL)isPrimaryDisplayDisabled;
-(void)setIsPrimaryDisplayDisabled:(BOOL)arg1 ;
-(BOOL)hasIsPrimaryDisplayDisabled;
-(void)setHasIsPrimaryDisplayDisabled:(BOOL)arg1 ;
-(NSString *)originatingDeviceIdsIdentifier;
-(void)setOriginatingDeviceIdsIdentifier:(NSString *)arg1 ;
-(BOOL)hasOriginatingDeviceIdsIdentifier;
-(NSString *)originatingDeviceRapportEffectiveId;
-(void)setOriginatingDeviceRapportEffectiveId:(NSString *)arg1 ;
-(BOOL)hasOriginatingDeviceRapportEffectiveId;
-(NSString *)originatingDeviceRapportMediaSystemId;
-(void)setOriginatingDeviceRapportMediaSystemId:(NSString *)arg1 ;
-(BOOL)hasOriginatingDeviceRapportMediaSystemId;
-(NSArray *)parameterImages;
-(void)setParameterImages:(NSArray *)arg1 ;
-(unsigned long long)parameterImagesCount;
-(BOOL)hasSuggestedInvocationPhrase;
-(int)triggerMethod;
-(void)setTriggerMethod:(int)arg1 ;
-(BOOL)hasTriggerMethod;
-(void)setHasTriggerMethod:(BOOL)arg1 ;
-(BOOL)userConfirmationRequired;
-(void)setUserConfirmationRequired:(BOOL)arg1 ;
-(BOOL)hasUserConfirmationRequired;
-(void)setHasUserConfirmationRequired:(BOOL)arg1 ;
-(_INPBString *)userUtterance;
-(void)setUserUtterance:(_INPBString *)arg1 ;
-(BOOL)hasUserUtterance;
@end

