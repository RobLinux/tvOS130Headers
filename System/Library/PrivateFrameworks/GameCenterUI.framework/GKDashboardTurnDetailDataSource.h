/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource {

	GKTurnBasedMatch* _match;

}

@property (nonatomic,retain) GKTurnBasedMatch * match;              //@synthesize match=_match - In the implementation block
-(void)dealloc;
-(long long)itemCount;
-(GKTurnBasedMatch *)match;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(double)preferredCollectionHeight;
-(id)initWithMatch:(id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
@end

