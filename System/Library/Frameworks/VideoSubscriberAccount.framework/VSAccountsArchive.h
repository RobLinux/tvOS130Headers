/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/NSSecureCoding.h>

@class NSArray, VSAccountChannels;

@interface VSAccountsArchive : NSObject <NSSecureCoding> {

	NSArray* _accounts;
	VSAccountChannels* _channels;

}

@property (nonatomic,copy) NSArray * accounts;                        //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,copy) VSAccountChannels * channels;              //@synthesize channels=_channels - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)accounts;
-(VSAccountChannels *)channels;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)setChannels:(VSAccountChannels *)arg1 ;
@end
