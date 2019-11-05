/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HomeKitBackingStore/NSCopying.h>
#import <HomeKitBackingStore/NSMutableCopying.h>

@class NSString, HMFVersion;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying> {

	BOOL _encrypted;
	BOOL _excludeFromCloudStorage;
	BOOL _optional;
	Class _classObj;
	NSString* _externalRecordField;
	unsigned long long _loggingVisibility;
	id _defaultValue;
	HMFVersion* _readonlyVersion;
	HMFVersion* _unavailableVersion;
	/*^block*/id _encodeBlock;
	/*^block*/id _decodeBlock;

}

@property (assign,getter=isOptional,nonatomic) BOOL optional;                   //@synthesize optional=_optional - In the implementation block
@property (assign,nonatomic) unsigned long long loggingVisibility;              //@synthesize loggingVisibility=_loggingVisibility - In the implementation block
@property (nonatomic,retain) id defaultValue;                                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) HMFVersion * readonlyVersion;                        //@synthesize readonlyVersion=_readonlyVersion - In the implementation block
@property (nonatomic,copy) HMFVersion * unavailableVersion;                     //@synthesize unavailableVersion=_unavailableVersion - In the implementation block
@property (nonatomic,retain) NSString * externalRecordField;                    //@synthesize externalRecordField=_externalRecordField - In the implementation block
@property (assign,nonatomic) BOOL encrypted;                                    //@synthesize encrypted=_encrypted - In the implementation block
@property (assign,nonatomic) BOOL excludeFromCloudStorage;                      //@synthesize excludeFromCloudStorage=_excludeFromCloudStorage - In the implementation block
@property (nonatomic,copy) id encodeBlock;                                      //@synthesize encodeBlock=_encodeBlock - In the implementation block
@property (nonatomic,copy) id decodeBlock;                                      //@synthesize decodeBlock=_decodeBlock - In the implementation block
@property (nonatomic,readonly) Class classObj;                                  //@synthesize classObj=_classObj - In the implementation block
+(id)fieldWithClass:(Class)arg1 ;
+(id)deprecatedField;
+(id)fieldWithClass:(Class)arg1 options:(id)arg2 ;
+(id)optionalFieldWithClass:(Class)arg1 ;
+(id)optionalFieldWithClass:(Class)arg1 options:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setDefaultValue:(id)arg1 ;
-(id)defaultValue;
-(BOOL)isOptional;
-(void)setOptional:(BOOL)arg1 ;
-(void)setEncrypted:(BOOL)arg1 ;
-(BOOL)encrypted;
-(Class)classObj;
-(BOOL)excludeFromCloudStorage;
-(NSString *)externalRecordField;
-(unsigned long long)loggingVisibility;
-(id)encodeQueryableValue:(id)arg1 ;
-(HMFVersion *)readonlyVersion;
-(HMFVersion *)unavailableVersion;
-(id)encodeBlock;
-(id)decodeQueryableValue:(id)arg1 ;
-(id)initWithClass:(Class)arg1 options:(id)arg2 ;
-(void)setLoggingVisibility:(unsigned long long)arg1 ;
-(id)decodeBlock;
-(void)setReadonlyVersion:(HMFVersion *)arg1 ;
-(void)setUnavailableVersion:(HMFVersion *)arg1 ;
-(void)setExternalRecordField:(NSString *)arg1 ;
-(void)setExcludeFromCloudStorage:(BOOL)arg1 ;
-(void)setEncodeBlock:(id)arg1 ;
-(void)setDecodeBlock:(id)arg1 ;
@end

