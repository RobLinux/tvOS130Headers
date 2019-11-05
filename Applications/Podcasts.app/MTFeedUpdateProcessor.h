/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTBaseProcessor.h>

@interface MTFeedUpdateProcessor : MTBaseProcessor
-(BOOL)start;
-(void)stop;
-(id)predicate;
-(id)entityName;
-(void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2 ;
-(double)updatePredicateDuration;
-(void)_lpmDidChange;
-(void)checkAutoDownloadsForUuids:(id)arg1 ;
-(BOOL)_isLPMEnabled;
-(void)_reCheck;
@end

