/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>

@class MFSqliteMessageIDStore, MFMessageLibrary, MFMailboxUid, NSDate;

@interface MFPOPDownloadQueue : MFBufferedQueue {

	MFSqliteMessageIDStore* _uidStore;
	MFMessageLibrary* _library;
	MFMailboxUid* _mailbox;
	NSDate* startDate;

}
-(id)init;
-(BOOL)addItem:(id)arg1 ;
-(unsigned long long)sizeForItem:(id)arg1 ;
-(BOOL)handleItems:(id)arg1 ;
@end

