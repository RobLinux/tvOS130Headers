/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HBItemOrderVideoSubscriberApplicationConfiguration : NSObject {

	NSString* _applicationIdentifier;
	unsigned long long _insertionIndex;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                 //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long insertionIndex;              //@synthesize insertionIndex=_insertionIndex - In the implementation block
+(id)configurationWithApplicationIdentifier:(id)arg1 insertionIndex:(unsigned long long)arg2 ;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(unsigned long long)insertionIndex;
-(id)initWithApplicationIdentifier:(id)arg1 insertionIndex:(unsigned long long)arg2 ;
-(void)setInsertionIndex:(unsigned long long)arg1 ;
@end

