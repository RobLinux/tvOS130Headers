/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <AccessibilityPlatformTranslation/NSCopying.h>
#import <AccessibilityPlatformTranslation/NSSecureCoding.h>

@class NSString, NSData;

@interface AXPTranslationObject : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isApplicationElement;
	BOOL _didPopuldateAppInfo;
	int _pid;
	unsigned long long _objectID;
	NSString* _remoteDebugDescription;
	NSString* _bridgeDelegateToken;
	NSData* _rawElementData;

}

@property (assign,nonatomic) unsigned long long objectID;                  //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) int pid;                                      //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL isApplicationElement;                    //@synthesize isApplicationElement=_isApplicationElement - In the implementation block
@property (nonatomic,copy) NSString * remoteDebugDescription;              //@synthesize remoteDebugDescription=_remoteDebugDescription - In the implementation block
@property (nonatomic,copy) NSString * bridgeDelegateToken;                 //@synthesize bridgeDelegateToken=_bridgeDelegateToken - In the implementation block
@property (nonatomic,copy) NSData * rawElementData;                        //@synthesize rawElementData=_rawElementData - In the implementation block
@property (assign,nonatomic) BOOL didPopuldateAppInfo;                     //@synthesize didPopuldateAppInfo=_didPopuldateAppInfo - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)allowedDecodableClasses;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)objectID;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setObjectID:(unsigned long long)arg1 ;
-(void)setIsApplicationElement:(BOOL)arg1 ;
-(void)setDidPopuldateAppInfo:(BOOL)arg1 ;
-(NSString *)remoteDebugDescription;
-(void)setRemoteDebugDescription:(NSString *)arg1 ;
-(void)setBridgeDelegateToken:(NSString *)arg1 ;
-(NSString *)bridgeDelegateToken;
-(BOOL)isApplicationElement;
-(NSData *)rawElementData;
-(void)setRawElementData:(NSData *)arg1 ;
-(BOOL)didPopuldateAppInfo;
@end

