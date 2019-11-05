/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MFIMAPOperation : NSObject {

	unsigned _type : 3;
	unsigned _failureCount : 4;
	unsigned _temporaryUids : 1;
	NSString* _mailboxName;
	SCD_Union_MF11* _opSpecific;

}
+(id)deserializedCopyFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(id)description;
-(void)dealloc;
-(BOOL)isValid;
-(unsigned char)_magic;
-(id)flags;
-(unsigned)failureCount;
-(void)setFailureCount:(unsigned)arg1 ;
-(int)operationType;
-(unsigned)uid;
-(unsigned)approximateSize;
-(id)mailboxName;
-(id)internalDate;
-(id)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(id)initWithType:(int)arg1 mailbox:(id)arg2 ;
-(void)serializeIntoData:(id)arg1 ;
-(id)initWithMailboxToCreate:(id)arg1 ;
-(id)initWithMailboxToDelete:(id)arg1 ;
-(id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 forUids:(id)arg3 inMailbox:(id)arg4 ;
-(id)initWithUidsToCopy:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 firstNewUid:(unsigned)arg4 ;
-(id)initWithAppendedUid:(unsigned)arg1 approximateSize:(unsigned)arg2 flags:(id)arg3 internalDate:(id)arg4 mailbox:(id)arg5 ;
-(BOOL)isSourceOfTemporaryUid:(unsigned)arg1 ;
-(BOOL)actsOnTemporaryUid:(unsigned)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(unsigned)firstTemporaryUid;
-(unsigned)lastTemporaryUid;
-(BOOL)usesRealUids;
-(void)setUsesRealUids:(BOOL)arg1 ;
-(id)flagsToSet;
-(id)flagsToClear;
-(id)uids;
-(id)sourceUids;
-(id)destinationUids;
-(id)destinationMailbox;
-(unsigned)sourceUidForTemporaryUid:(unsigned)arg1 ;
-(BOOL)getMessageId:(id*)arg1 andInternalDate:(id*)arg2 forDestinationUid:(unsigned)arg3 ;
-(void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned)arg3 ;
@end

