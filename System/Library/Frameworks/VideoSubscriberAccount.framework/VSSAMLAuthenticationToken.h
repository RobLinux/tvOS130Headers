/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAuthenticationToken.h>

@class NSDate, NSString, NSData;

@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken> {

	NSData* _serializedData;

}

@property (nonatomic,copy) NSData * serializedData;                       //@synthesize serializedData=_serializedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(BOOL)isOpaque;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSData *)serializedData;
-(id)initWithSerializedData:(id)arg1 ;
-(void)setSerializedData:(NSData *)arg1 ;
-(BOOL)isFromUnsupportedProvider;
@end

