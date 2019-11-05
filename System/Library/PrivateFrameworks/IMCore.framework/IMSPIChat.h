/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCore/IMCore-Structs.h>
@class NSString, NSArray;

@interface IMSPIChat : NSObject {

	BOOL _isGroup;
	NSString* _guid;
	NSString* _chatIdentifier;
	NSString* _serviceName;
	NSString* _displayName;
	NSArray* _handles;

}

@property (retain) NSString * guid;                        //@synthesize guid=_guid - In the implementation block
@property (retain) NSString * chatIdentifier;              //@synthesize chatIdentifier=_chatIdentifier - In the implementation block
@property (retain) NSString * serviceName;                 //@synthesize serviceName=_serviceName - In the implementation block
@property (retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (assign) BOOL isGroup;                           //@synthesize isGroup=_isGroup - In the implementation block
@property (retain) NSArray * handles;                      //@synthesize handles=_handles - In the implementation block
+(void)enumerateAllChatsWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(NSString *)displayName;
-(NSString *)serviceName;
-(NSArray *)handles;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setHandles:(NSArray *)arg1 ;
-(NSString *)chatIdentifier;
-(void)setChatIdentifier:(NSString *)arg1 ;
-(BOOL)isGroup;
-(id)initWithChatRecord:(IMDChatRecordStructRef)arg1 ;
-(void)enumerateAllAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllMessagesWithBlock:(/*^block*/id)arg1 ;
-(void)setIsGroup:(BOOL)arg1 ;
@end

