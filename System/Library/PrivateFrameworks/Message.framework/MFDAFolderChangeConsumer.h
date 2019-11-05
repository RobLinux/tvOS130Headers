/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/DAFolderChangeConsumer.h>

@class MFConditionLock, MFDAFolderChangeResult;

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer> {

	MFConditionLock* _conditionLock;
	MFDAFolderChangeResult* _result;

}
-(id)init;
-(void)dealloc;
-(void)folderChange:(id)arg1 finishedWithStatus:(long long)arg2 error:(id)arg3 ;
-(id)waitForResult;
@end

