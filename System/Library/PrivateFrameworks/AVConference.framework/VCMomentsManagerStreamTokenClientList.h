/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMomentsMessenger;
@class NSMutableArray, NSArray;

@interface VCMomentsManagerStreamTokenClientList : NSObject {

	long long _streamToken;
	id<VCMomentsMessenger> _messenger;
	NSMutableArray* _clientContextList;

}

@property (nonatomic,readonly) id<VCMomentsMessenger> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (nonatomic,readonly) NSArray * clientContextList;                   //@synthesize clientContextList=_clientContextList - In the implementation block
+(BOOL)isValidContext:(id)arg1 ;
+(long long)streamTokenFromClientContext:(id)arg1 ;
-(void)dealloc;
-(id)newContext;
-(void)removeContext:(id)arg1 ;
-(NSArray *)clientContextList;
-(id)initWithStreamToken:(long long)arg1 messenger:(id)arg2 ;
-(id<VCMomentsMessenger>)messenger;
@end

