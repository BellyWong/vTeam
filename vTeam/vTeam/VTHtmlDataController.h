//
//  VTHtmlDataController.h
//  vTeam
//
//  Created by shenyu on 13-9-2.
//  Copyright (c) 2013年 hailong.org. All rights reserved.
//

#import <vTeam/vTeam.h>

@interface VTHtmlDataController : VTDataController <UIWebViewDelegate>

@property(nonatomic,retain) IBOutlet UIWebView * webView;

- (void)setShowShadows:(BOOL)bShow;

@end
