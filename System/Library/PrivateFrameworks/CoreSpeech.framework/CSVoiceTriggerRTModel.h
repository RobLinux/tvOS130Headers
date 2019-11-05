/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/NSSecureCoding.h>

@class NSData, NSString;

@interface CSVoiceTriggerRTModel : NSObject <NSSecureCoding> {

	NSData* _modelData;
	NSString* _modelLocale;
	NSString* _modelHash;
	NSData* _digest;
	NSData* _signature;
	NSData* _certificate;

}

@property (nonatomic,readonly) NSData * modelData;                  //@synthesize modelData=_modelData - In the implementation block
@property (nonatomic,readonly) NSString * modelLocale;              //@synthesize modelLocale=_modelLocale - In the implementation block
@property (nonatomic,readonly) NSString * modelHash;                //@synthesize modelHash=_modelHash - In the implementation block
@property (nonatomic,readonly) NSData * digest;                     //@synthesize digest=_digest - In the implementation block
@property (nonatomic,readonly) NSData * signature;                  //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSData * certificate;                //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)certificate;
-(NSData *)signature;
-(NSData *)digest;
-(id)builtInRTModelDictionary;
-(NSData *)modelData;
-(id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3 ;
-(id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3 digest:(id)arg4 signature:(id)arg5 certificate:(id)arg6 ;
-(id)initWithHash:(id)arg1 locale:(id)arg2 ;
-(NSString *)modelLocale;
-(NSString *)modelHash;
@end

