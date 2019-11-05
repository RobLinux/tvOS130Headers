/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSString, VUIActionItunesExtras;

@interface VUITransactionOffer : NSObject {

	NSDictionary* _transactionOfferDict;
	NSArray* _videosPlayables;
	NSDictionary* _offer;

}

@property (nonatomic,readonly) BOOL playWhenDone; 
@property (nonatomic,readonly) NSString * buyParams; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * videosPlayables; 
@property (nonatomic,copy,readonly) NSDictionary * offer;                              //@synthesize offer=_offer - In the implementation block
@property (nonatomic,copy,readonly) VUIActionItunesExtras * extrasAction; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)buyParams;
-(NSDictionary *)offer;
-(NSArray *)videosPlayables;
-(BOOL)playWhenDone;
-(id)notificationTitle;
-(id)notificationBody;
-(VUIActionItunesExtras *)extrasAction;
@end

