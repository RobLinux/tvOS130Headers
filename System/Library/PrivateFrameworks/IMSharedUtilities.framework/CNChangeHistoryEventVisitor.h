/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNChangeHistoryEventVisitor <NSObject>
@optional
-(void)visitAddGroupEvent:(id)arg1;
-(void)visitUpdateGroupEvent:(id)arg1;
-(void)visitDeleteGroupEvent:(id)arg1;
-(void)visitAddMemberToGroupEvent:(id)arg1;
-(void)visitRemoveMemberFromGroupEvent:(id)arg1;
-(void)visitAddSubgroupToGroupEvent:(id)arg1;
-(void)visitRemoveSubgroupFromGroupEvent:(id)arg1;

@required
-(void)visitDropEverythingEvent:(id)arg1;
-(void)visitAddContactEvent:(id)arg1;
-(void)visitUpdateContactEvent:(id)arg1;
-(void)visitDeleteContactEvent:(id)arg1;

@end

