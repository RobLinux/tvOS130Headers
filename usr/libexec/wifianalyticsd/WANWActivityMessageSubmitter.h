/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:12:00 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/wifianalyticsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <wifianalyticsd/WAProtobufMessageSubmitter.h>

@interface WANWActivityMessageSubmitter : WAProtobufMessageSubmitter {

	long long _groupTypeForThisSubmitter;

}

@property (assign,nonatomic) long long groupTypeForThisSubmitter;              //@synthesize groupTypeForThisSubmitter=_groupTypeForThisSubmitter - In the implementation block
-(id)submitMessage:(id)arg1 ;
-(long long)groupTypeForThisSubmitter;
-(void)setGroupTypeForThisSubmitter:(long long)arg1 ;
-(id)initWithMessageGroupType:(long long)arg1 ;
@end

