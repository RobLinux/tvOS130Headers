/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding> {

	unsigned _flags;
	NSString* _contactID;
	NSArray* _handles;
	NSString* _sendersKnownAlias;

}

@property (nonatomic,copy) NSString * contactID;                      //@synthesize contactID=_contactID - In the implementation block
@property (assign,nonatomic) unsigned flags;                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSArray * handles;                         //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy) NSString * sendersKnownAlias;              //@synthesize sendersKnownAlias=_sendersKnownAlias - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)flags;
-(NSArray *)handles;
-(void)setFlags:(unsigned)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(NSString *)contactID;
-(void)setContactID:(NSString *)arg1 ;
-(NSString *)sendersKnownAlias;
-(void)setSendersKnownAlias:(NSString *)arg1 ;
@end

