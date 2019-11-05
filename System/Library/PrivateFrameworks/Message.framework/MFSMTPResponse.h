/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/NSCopying.h>

@class NSString, NSArray;

@interface MFSMTPResponse : NSObject <NSCopying> {

	id _lastResponseLine;
	int _status;
	unsigned _statusClass : 10;
	unsigned _statusSubject : 10;
	unsigned _statusDetail : 10;
	NSString* _statusString;
	NSArray* _continuationResponses;

}

@property (nonatomic,readonly) int status;                                 //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned statusClass;                       //@synthesize statusClass=_statusClass - In the implementation block
@property (nonatomic,readonly) unsigned statusSubject;                     //@synthesize statusSubject=_statusSubject - In the implementation block
@property (nonatomic,readonly) unsigned statusDetail;                      //@synthesize statusDetail=_statusDetail - In the implementation block
@property (nonatomic,readonly) NSString * statusString;                    //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,retain) NSArray * continuationResponses;              //@synthesize continuationResponses=_continuationResponses - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(int)status;
-(NSString *)statusString;
-(void)setStatus:(int)arg1 ;
-(id)initWithStatus:(int)arg1 ;
-(int)failureReason;
-(id)lastResponseLine;
-(id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2 ;
-(void)setLastResponseLine:(id)arg1 ;
-(void)setContinuationResponses:(NSArray *)arg1 ;
-(void)_updateEnhancedStatusCodesFromLastResponse;
-(unsigned)statusClass;
-(unsigned)statusSubject;
-(unsigned)statusDetail;
-(NSArray *)continuationResponses;
@end

