/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSData;

@interface MTJSPlaybackRequest : NSObject {

	BOOL _firstItemIsRestricted;
	NSString* _featureName;
	NSArray* _items;
	NSData* _recommendationData;
	unsigned long long _shuffleMode;
	unsigned long long _startIndex;
	unsigned long long _upNextAction;

}

@property (assign,nonatomic) BOOL firstItemIsRestricted;                      //@synthesize firstItemIsRestricted=_firstItemIsRestricted - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                          //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSData * recommendationData;              //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,readonly) unsigned long long shuffleMode;                //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,readonly) unsigned long long startIndex;                 //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long upNextAction;               //@synthesize upNextAction=_upNextAction - In the implementation block
-(id)init;
-(NSArray *)items;
-(unsigned long long)startIndex;
-(NSString *)featureName;
-(NSData *)recommendationData;
-(unsigned long long)shuffleMode;
-(void)setFirstItemIsRestricted:(BOOL)arg1 ;
-(id)initWithJSDictionary:(id)arg1 ;
-(unsigned long long)upNextAction;
-(BOOL)firstItemIsRestricted;
@end
