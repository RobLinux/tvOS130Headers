/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXScrollViewControllerObserver.h>

@protocol PXMemoriesFeedScrollFilterDelegate;
@class PXScrollViewController, PXMemoriesSpec, NSDate, NSString;

@interface PXMemoriesFeedScrollFilter : NSObject <PXScrollViewControllerObserver> {

	double _additionalContentThreshold;
	struct {
		BOOL respondsToShouldRequestAdditionalContent;
	}  _delegateFlags;
	PXScrollViewController* _scrollViewController;
	PXMemoriesSpec* _spec;
	id<PXMemoriesFeedScrollFilterDelegate> _delegate;
	NSDate* __lastAdditionalContentRequestDate;

}

@property (setter=_setLastAdditionalContentRequestDate:,nonatomic,retain) NSDate * _lastAdditionalContentRequestDate;              //@synthesize _lastAdditionalContentRequestDate=__lastAdditionalContentRequestDate - In the implementation block
@property (nonatomic,readonly) PXScrollViewController * scrollViewController;                                                      //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (nonatomic,retain) PXMemoriesSpec * spec;                                                                                //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic,__weak) id<PXMemoriesFeedScrollFilterDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXMemoriesFeedScrollFilterDelegate>)delegate;
-(void)setDelegate:(id<PXMemoriesFeedScrollFilterDelegate>)arg1 ;
-(PXMemoriesSpec *)spec;
-(void)setSpec:(PXMemoriesSpec *)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(PXScrollViewController *)scrollViewController;
-(id)initWithScrollViewController:(id)arg1 ;
-(NSDate *)_lastAdditionalContentRequestDate;
-(void)_setLastAdditionalContentRequestDate:(id)arg1 ;
@end

