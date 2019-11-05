/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIFocusEnvironment, _UIFocusUpdateRequesting, UIFocusItemScrollableContainer;
#import <UIKitCore/UIKitCore-Structs.h>
@class _UIFocusItemInfo, UIImage, _UIFocusMovementInfo, _UIFocusMapSearchInfo, NSArray, _UIDebugLogReport, _UIDebugIssueReport, UIFocusGuide, UIView;

@interface UIFocusUpdateContext : NSObject {

	struct {
		unsigned isValid : 1;
		unsigned hasValidated : 1;
		unsigned shouldUpdateDestinationItem : 1;
		unsigned sourceItemMayRemainFocused : 1;
		unsigned didResolveCommonAncestorEnvironment : 1;
	}  _flags;
	_UIFocusItemInfo* _destinationItemInfo;
	id<UIFocusEnvironment> _commonAncestorEnvironment;
	UIImage* _regionMapSnapshotsVisualRepresentation;
	id<_UIFocusUpdateRequesting> _request;
	_UIFocusItemInfo* _sourceItemInfo;
	_UIFocusMovementInfo* _focusMovement;
	_UIFocusMapSearchInfo* _focusMapSearchInfo;
	id<UIFocusEnvironment> _initialDestinationEnvironment;
	id<UIFocusItemScrollableContainer> _commonScrollableContainer;
	double _destinationViewDistanceOffscreen;
	NSArray* _regionMapSnapshots;
	_UIDebugLogReport* _preferredFocusReport;
	_UIDebugIssueReport* _validationReport;
	UIFocusGuide* _focusedGuide;

}

@property (getter=_request,nonatomic,readonly) id<_UIFocusUpdateRequesting> request;                                                                                            //@synthesize request=_request - In the implementation block
@property (getter=_sourceItemInfo,nonatomic,copy,readonly) _UIFocusItemInfo * sourceItemInfo;                                                                                   //@synthesize sourceItemInfo=_sourceItemInfo - In the implementation block
@property (getter=_destinationItemInfo,nonatomic,copy,readonly) _UIFocusItemInfo * destinationItemInfo;                                                                         //@synthesize destinationItemInfo=_destinationItemInfo - In the implementation block
@property (getter=_focusMovement,nonatomic,readonly) _UIFocusMovementInfo * focusMovement;                                                                                      //@synthesize focusMovement=_focusMovement - In the implementation block
@property (setter=_setFocusMapSearchInfo:,getter=_focusMapSearchInfo,nonatomic,retain) _UIFocusMapSearchInfo * focusMapSearchInfo;                                              //@synthesize focusMapSearchInfo=_focusMapSearchInfo - In the implementation block
@property (getter=_initialDestinationEnvironment,nonatomic,__weak,readonly) id<UIFocusEnvironment> initialDestinationEnvironment;                                               //@synthesize initialDestinationEnvironment=_initialDestinationEnvironment - In the implementation block
@property (getter=_commonAncestorEnvironment,nonatomic,__weak,readonly) id<UIFocusEnvironment> commonAncestorEnvironment;                                                       //@synthesize commonAncestorEnvironment=_commonAncestorEnvironment - In the implementation block
@property (setter=_setCommonScrollableContainer:,getter=_commonScrollableContainer,nonatomic,retain) id<UIFocusItemScrollableContainer> commonScrollableContainer;              //@synthesize commonScrollableContainer=_commonScrollableContainer - In the implementation block
@property (assign,setter=_setDestinationViewDistanceOffscreen:,getter=_destinationViewDistanceOffscreen,nonatomic) double destinationViewDistanceOffscreen;                     //@synthesize destinationViewDistanceOffscreen=_destinationViewDistanceOffscreen - In the implementation block
@property (setter=_setRegionMapSnapshots:,getter=_regionMapSnapshots,nonatomic,retain) NSArray * regionMapSnapshots;                                                            //@synthesize regionMapSnapshots=_regionMapSnapshots - In the implementation block
@property (getter=_regionMapSnapshotsVisualRepresentation,nonatomic,readonly) UIImage * regionMapSnapshotsVisualRepresentation;                                                 //@synthesize regionMapSnapshotsVisualRepresentation=_regionMapSnapshotsVisualRepresentation - In the implementation block
@property (setter=_setPreferredFocusReport:,getter=_preferredFocusReport,nonatomic,retain) _UIDebugLogReport * preferredFocusReport;                                            //@synthesize preferredFocusReport=_preferredFocusReport - In the implementation block
@property (setter=_setValidationReport:,getter=_validationReport,nonatomic,retain) _UIDebugIssueReport * validationReport;                                                      //@synthesize validationReport=_validationReport - In the implementation block
@property (getter=_focusedGuide,nonatomic,__weak,readonly) UIFocusGuide * focusedGuide;                                                                                         //@synthesize focusedGuide=_focusedGuide - In the implementation block
@property (getter=_focusVelocity,nonatomic,readonly) CGVector focusVelocity; 
@property (nonatomic,__weak,readonly) id<UIFocusItem> previouslyFocusedItem; 
@property (nonatomic,__weak,readonly) id<UIFocusItem> nextFocusedItem; 
@property (nonatomic,__weak,readonly) UIView * previouslyFocusedView; 
@property (nonatomic,__weak,readonly) UIView * nextFocusedView; 
@property (nonatomic,readonly) unsigned long long focusHeading; 
+(id)_defaultValidationReportFormatter;
-(id)description;
-(id)init;
-(id)_request;
-(id)debugQuickLookObject;
-(BOOL)_validate;
-(UIView *)previouslyFocusedView;
-(UIView *)nextFocusedView;
-(id<UIFocusItem>)previouslyFocusedItem;
-(id<UIFocusItem>)nextFocusedItem;
-(CGVector)_focusVelocity;
-(unsigned long long)focusHeading;
-(void)_didUpdateFocus;
-(id)_focusedGuide;
-(id)_initWithContext:(id)arg1 ;
-(double)_destinationViewDistanceOffscreen;
-(id)_initWithFocusUpdateRequest:(id)arg1 ;
-(void)_setPreferredFocusReport:(id)arg1 ;
-(void)_setValidationReport:(id)arg1 ;
-(id)_preferredFocusReport;
-(BOOL)_isValidInFocusSystem:(id)arg1 ;
-(id)_validationReport;
-(id)_focusMapSearchInfo;
-(id)_focusMovement;
-(void)_setFocusedGuide:(id)arg1 ;
-(void)_setRegionMapSnapshots:(id)arg1 ;
-(id)_initWithFocusMovementRequest:(id)arg1 nextFocusedItem:(id)arg2 ;
-(void)_willUpdateFocusFromFocusedItem:(id)arg1 ;
-(id)_sourceItemInfo;
-(id)_destinationItemInfo;
-(id)_commonAncestorEnvironment;
-(void)_setFocusMapSearchInfo:(id)arg1 ;
-(void)_setCommonScrollableContainer:(id)arg1 ;
-(void)_setDestinationViewDistanceOffscreen:(double)arg1 ;
-(void)_restoreRestrictedFocusMovementWithMovement:(id)arg1 ;
-(id)_initialDestinationEnvironment;
-(void)_updateDestinationItemIfNeeded;
-(void)_setSourceItemInfo:(id)arg1 ;
-(id)_regionMapSnapshots;
-(id)_focusMapSnapshotDebugInfoArray;
-(id)_publicRegionMapSnapshots;
-(id)_regionMapSnapshotsVisualRepresentation;
-(void)_setInitialDestinationEnvironment:(id)arg1 ;
-(id)_commonScrollableContainer;
@end

