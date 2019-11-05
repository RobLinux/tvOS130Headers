/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class WLKShowContentRating, NSDate, NSString;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata {

	WLKShowContentRating* _contentRating;
	NSDate* _releaseDate;
	NSDate* _finaleDate;
	NSString* _network;

}

@property (nonatomic,readonly) WLKShowContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                              //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSDate * finaleDate;                               //@synthesize finaleDate=_finaleDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * network;                           //@synthesize network=_network - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)network;
-(WLKShowContentRating *)contentRating;
-(NSDate *)releaseDate;
-(NSDate *)finaleDate;
@end
