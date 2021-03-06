/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/NSCopying.h>

@class MPStoreCompletionOfferResponse, MPMediaQuery, MPStoreCollectionCompletionOffering, NSURL, MPStoreOfferMediaItemCollection;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {

	long long _preferredStoreOfferVariant;
	MPStoreCompletionOfferResponse* _storeOfferResponse;
	MPMediaQuery* _localItemsQuery;
	MPStoreCollectionCompletionOffering* _collectionWithCompletionItemsOffering;
	long long _presentationStyle;
	NSURL* _storeURL;

}

@property (assign,nonatomic) long long preferredStoreOfferVariant; 
@property (nonatomic,readonly) long long presentationStyle;                                                  //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * storeURL;                                                        //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * collectionWithCompletionItems; 
+(void)setDefaultOfferVariant:(long long)arg1 ;
+(long long)defaultOfferVariant;
+(id)offeringWithResponse:(id)arg1 localItemsQuery:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)presentationStyle;
-(id)initWithResponse:(id)arg1 localItemsQuery:(id)arg2 ;
-(id)copyByInvalidatingCalculatedContent;
-(void)_loadOfferingData;
-(void)setPreferredStoreOfferVariant:(long long)arg1 ;
-(long long)preferredStoreOfferVariant;
-(MPStoreOfferMediaItemCollection *)collectionWithCompletionItems;
-(NSURL *)storeURL;
@end

