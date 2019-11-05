/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriTVUI/SiriTVUI-Structs.h>
@class NSMapTable;

@interface SiriTVUIGroupViewFitInfo : NSObject {

	NSMapTable* _viewsToFitSizes;
	CGSize _totalFitSize;

}

@property (nonatomic,copy) NSMapTable * viewsToFitSizes;              //@synthesize viewsToFitSizes=_viewsToFitSizes - In the implementation block
@property (assign,nonatomic) CGSize totalFitSize;                     //@synthesize totalFitSize=_totalFitSize - In the implementation block
-(CGSize)totalFitSize;
-(NSMapTable *)viewsToFitSizes;
-(void)setViewsToFitSizes:(NSMapTable *)arg1 ;
-(void)setTotalFitSize:(CGSize)arg1 ;
@end

