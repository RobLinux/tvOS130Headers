/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMChat.h>
#import <IMCore/IMSimulatedChatDelegate.h>
#import <IMCore/IMSimulatedDaemonListener.h>

@protocol IMSimulatedChatDelegate;
@class IMSimulatedAccount, NSString, NSMutableArray;

@interface IMSimulatedChat : IMChat <IMSimulatedChatDelegate, IMSimulatedDaemonListener> {

	id<IMSimulatedChatDelegate> _delegate;
	IMSimulatedAccount* _simulatedAccount;
	unsigned long long _currentMessageID;
	NSString* _simulatedChatIdentifier;
	NSMutableArray* _simulatedAttachments;
	NSString* _simulatedDisplayName;

}

@property (nonatomic,readonly) IMSimulatedAccount * simulatedAccount;                  //@synthesize simulatedAccount=_simulatedAccount - In the implementation block
@property (nonatomic,readonly) unsigned long long currentMessageID;                    //@synthesize currentMessageID=_currentMessageID - In the implementation block
@property (nonatomic,copy) NSString * simulatedChatIdentifier;                         //@synthesize simulatedChatIdentifier=_simulatedChatIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * simulatedAttachments;                  //@synthesize simulatedAttachments=_simulatedAttachments - In the implementation block
@property (nonatomic,copy) NSString * simulatedDisplayName;                            //@synthesize simulatedDisplayName=_simulatedDisplayName - In the implementation block
@property (assign,nonatomic,__weak) id<IMSimulatedChatDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IMSimulatedChatDelegate>)delegate;
-(void)setDelegate:(id<IMSimulatedChatDelegate>)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(id)attachments;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)account;
-(id)chatIdentifier;
-(BOOL)_handleIncomingItem:(id)arg1 ;
-(void)markAsAutoSpamReported;
-(id)initWithIncomingIDs:(id)arg1 messageIDOffset:(unsigned long long)arg2 account:(id)arg3 ;
-(long long)joinState;
-(void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5 ;
-(IMSimulatedAccount *)simulatedAccount;
-(void)chat:(id)arg1 didSendMessage:(id)arg2 ;
-(NSMutableArray *)simulatedAttachments;
-(unsigned long long)currentMessageID;
-(NSString *)simulatedChatIdentifier;
-(void)setSimulatedChatIdentifier:(NSString *)arg1 ;
-(id)_messageWithGUID:(id)arg1 ;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3 ;
-(NSString *)simulatedDisplayName;
-(void)setSimulatedDisplayName:(NSString *)arg1 ;
@end

