/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSSceneSnapshotContext, FBSSceneSnapshotRequestAction;

@interface FBSSceneSnapshotRequestHandle : NSObject {

	unsigned long long _type;
	FBSSceneSnapshotContext* _context;
	FBSSceneSnapshotRequestAction* _action;
	BOOL _canceled;

}
+(id)handleForRequestType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)performRequestForScene:(id)arg1 ;
-(id)initWithRequestType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)_clearAction;
-(void)cancelRequest;
@end

