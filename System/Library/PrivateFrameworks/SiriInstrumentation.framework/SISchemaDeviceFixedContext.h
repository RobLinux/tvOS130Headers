/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <SiriInstrumentation/SISchemaDeviceFixedContext.h>
@class NSString, NSData;


@protocol SISchemaDeviceFixedContext <NSObject>
@property (nonatomic,copy) NSString * deviceType; 
@property (nonatomic,copy) NSString * systemBuild; 
@property (nonatomic,copy) NSString * siriInputLanguage; 
@property (nonatomic,copy) NSString * siriVoiceLanguage; 
@property (nonatomic,copy) NSString * systemLocale; 
@property (nonatomic,copy) NSString * siriDeviceID; 
@property (nonatomic,copy) NSString * speechID; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)systemLocale;
-(NSString *)deviceType;
-(void)setDeviceType:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setSiriDeviceID:(id)arg1;
-(NSString *)siriDeviceID;
-(void)setSystemBuild:(id)arg1;
-(void)setSiriInputLanguage:(id)arg1;
-(void)setSiriVoiceLanguage:(id)arg1;
-(void)setSystemLocale:(id)arg1;
-(void)setSpeechID:(id)arg1;
-(NSString *)systemBuild;
-(NSString *)siriInputLanguage;
-(NSString *)siriVoiceLanguage;
-(NSString *)speechID;

@end

#import <SiriInstrumentation/NSSecureCoding.h>

@class NSString, NSData;

@interface SISchemaDeviceFixedContext : PBCodable <SISchemaDeviceFixedContext, NSSecureCoding> {

	NSString* _deviceType;
	NSString* _systemBuild;
	NSString* _siriInputLanguage;
	NSString* _siriVoiceLanguage;
	NSString* _systemLocale;
	NSString* _siriDeviceID;
	NSString* _speechID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSString * systemBuild;                    //@synthesize systemBuild=_systemBuild - In the implementation block
@property (nonatomic,copy) NSString * siriInputLanguage;              //@synthesize siriInputLanguage=_siriInputLanguage - In the implementation block
@property (nonatomic,copy) NSString * siriVoiceLanguage;              //@synthesize siriVoiceLanguage=_siriVoiceLanguage - In the implementation block
@property (nonatomic,copy) NSString * systemLocale;                   //@synthesize systemLocale=_systemLocale - In the implementation block
@property (nonatomic,copy) NSString * siriDeviceID;                   //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * speechID;                       //@synthesize speechID=_speechID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)systemLocale;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setSiriDeviceID:(NSString *)arg1 ;
-(NSString *)siriDeviceID;
-(void)setSystemBuild:(NSString *)arg1 ;
-(void)setSiriInputLanguage:(NSString *)arg1 ;
-(void)setSiriVoiceLanguage:(NSString *)arg1 ;
-(void)setSystemLocale:(NSString *)arg1 ;
-(void)setSpeechID:(NSString *)arg1 ;
-(NSString *)systemBuild;
-(NSString *)siriInputLanguage;
-(NSString *)siriVoiceLanguage;
-(NSString *)speechID;
@end

