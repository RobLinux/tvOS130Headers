/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolSecurityConnection : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * protocol; 
@property (nonatomic,copy) NSString * cipher; 
-(NSString *)protocol;
-(void)setProtocol:(NSString *)arg1 ;
-(void)setCipher:(NSString *)arg1 ;
-(NSString *)cipher;
@end

